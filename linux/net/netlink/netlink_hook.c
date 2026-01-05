/*
 *	Written By Jin Minu
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/netlink.h>
#include <asm/types.h>
#include <net/net_namespace.h>
#include <net/sock.h>
#include <linux/pid.h>
#include <linux/string.h>
#include <linux/types.h>

#define NETLINK_JMW 30
#define SYSCALL_NAME_LENGTH 10

MODULE_LICENSE("GPL");
MODULE_AUTHOR("JMW");

static inline u64 read_cycles(void) {
	u64 val;
	asm volatile("mrs %0, cntvct_el0" : "=r" (val));
	return val;
}

static u64 total_cycles = 0;
static u64 call_count = 0;

struct sock *netlink_socket = NULL;
static pid_t target_pid = 0;

typedef struct syscall_data {
	pid_t pid;
	char name[SYSCALL_NAME_LENGTH]; // system call name
} SYSCALL_DATA;

/*
 *	메세지 전송 : Kernel to User
 *	다음의 순서를 따른다.
 *	
 *	1. 버퍼 할당
 *	2. 헤더 추가
 *	3. 페이로드 복사
 *	4. 컨트롤 블록 설정
 *	5. 전송
 */
void nl_send_msg(pid_t pid, const char *syscall_name)
{
	SYSCALL_DATA data;
	struct sk_buff *skb_out;
	struct nlmsghdr *nlh;

	data.pid = pid;
	strncpy(data.name, syscall_name, SYSCALL_NAME_LENGTH - 1); // 'b' 'r' 'k' '\0' '\0' '\0' '\0' '\0' '\0'
	data.name[SYSCALL_NAME_LENGTH - 1] = '\0'; // 예외의 경우

	int data_length = sizeof(data);

	u64 cycles_start, cycles_end;
	cycles_start = read_cycles(); // 사이클 시작

	/*
	 * nlmsg_new : Allocate a new netlink message buffer
	 *
	 * data_length : payload
	 * GFP_KERNEL : type of memory to allocate
	 */
	skb_out = nlmsg_new(data_length, GFP_KERNEL); 
	if (unlikely(!skb_out)) {
		printk(KERN_ERR "[JMW] Netlink Alloc failed!\n");
		return;
	}

	/*
	 * nlmsg_put : add new netlink message to an skb (skb : socket buffer)
	 *
	 * skb_out : socket buffer to store message in
	 * port id : sending process Port ID (보내려는 프로세스의 pid)
	 * seq : sequence number
	 * NETLINK_JMW : message type
	 * data_length : length of payload
	 * flag : 
	 */	
	nlh = nlmsg_put(skb_out, 0, 0, NETLINK_JMW, data_length, 0);
	if (unlikely(!nlh)) {
		kfree_skb(skb_out);
		return;
	}

	/*
	 * nlmsg_data : payload의 포인터
	 * nlmsg_data의 인자 nlh : netlink message header
	 */
	memcpy(nlmsg_data(nlh), &data, data_length); // payload 포인터에 data_length만큼 data copy

	// NETLINK_CB(skb_out).dst_group = 0;

	/*
	 * nlmsg_unicast : 특정 pid와 1:1통신
	 * netlink_socket : 메세지 보내는 데 사용할 커널 Netlink Socket pointer
	 * skb_out : message buffer (헤더랑 payload 담김)
	 * monitor_pid : 대상 프로세스 PID -> 도착 소켓의 Port ID
	 */

	// 관찰중인 프로세스 살아있다면,
	// 통신시도 -> 시도 실패(프로세스가 죽은게 확인되었다면)시 target_pid=0 으로 변경
	if (target_pid > 0) {
		int ret = nlmsg_unicast(netlink_socket, skb_out, target_pid); // unicast : 1:1통신
		if (ret < 0) {
			printk(KERN_ERR "[JMW] Netlink send err!\n");
			target_pid = 0;
		}
	}
	else {
		kfree_skb(skb_out);
	}

	cycles_end = read_cycles();
	total_cycles += (cycles_end - cycles_start);
	call_count++;

	if (call_count % 10000 == 0) {
		printk(KERN_INFO "[JMW] Branch prediction: %llu cycles (total calls: %llu)\n", total_cycles / call_count, call_count);
	}
}

EXPORT_SYMBOL(nl_send_msg);

static void nl_recv_msg(struct sk_buff *skb) //인자로 메세지 버퍼 받음
{
	/*
	 * monitor_pid(결과를 보낼 pid)를 설정
	 */
	struct nlmsghdr *nlh;
	pid_t sender_pid;

	if (!skb)
		return;

	nlh = nlmsg_hdr(skb); // message buffer pointer
	sender_pid = nlh->nlmsg_pid; // get sender's pid

	if (sender_pid != 0) {
		target_pid = sender_pid;
		printk(KERN_INFO "[JMW] Monitor pid is : %d\n", target_pid);
	}
	else {
		printk(KERN_WARNING "[JMW] sender_pid = 0");
	}
}

/*
 * 	모듈 초기화 / 종료
 */
static int __init netlink_init(void)
{
	struct netlink_kernel_cfg config = {
		.input = nl_recv_msg,
	};

	netlink_socket = netlink_kernel_create(&init_net, NETLINK_JMW, &config);
	if (!netlink_socket) {
		printk(KERN_INFO "[JMW] Netlink Socket creation failed!\n");
		return -ENOMEM;	
	}

	printk(KERN_INFO "[JMW] Netlink Socket creation success!\n");

	return 0;
}

static void __exit netlink_exit(void)
{
	if (netlink_socket) {
		netlink_kernel_release(netlink_socket);
	}
	printk(KERN_INFO "[JMW] Netlink Module unloaded!\n");
}

module_init(netlink_init);
module_exit(netlink_exit);
