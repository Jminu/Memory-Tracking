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

#define NETLINK_JMW 30

MODULE_LICENSE("GPL");
MODULE_AUTHOR("JMW");

struct sock *netlink_socket = NULL;
static pid_t monitor_pid = 0;

struct syscall_data {
	pid_t pid;
};

/*
 *	메세지 전송 : Kernel to User
 */
void nl_send_msg(pid_t pid)
{
	struct syscall_data data;
	struct sk_buff *skb_out;
	struct nlmsghdr *nlh;

	data.pid = pid;
	int data_length = sizeof(data);



	/*
	 * nlmsg_new : Allocate a new netlink message
	 *
	 * data_length : payload
	 * GFP_KERNEL : type of memory to allocate
	 */
	skb_out = nlmsg_new(data_length, GFP_KERNEL); 
	if (!skb_out) {
		printk(KERN_ERR "[JMW] Netlink Alloc failed!\n");
		return;
	}

	/*
	 * nlmsg_put : add new netlink message to an skb (skb : socket buffer)
	 *
	 * skb_out : socket buffer to store message in
	 * port id : 
	 * seq : 
	 * NETLINK_JMW : message type
	 * data_length : length of payload
	 * flag : 
	 */	
	nlh = nlmsg_put(skb_out, 0, 0, NETLINK_JMW, data_length, 0);
	if (!nlh) {
		kfree_skb(skb_out);
		return;
	}

	/*
	 * nlmsg_data : payload의 포인터
	 * nlmsg_data의 인자 nlh : netlink message header
	 */
	memcpy(nlmsg_data(nlh), &data, data_length); // payload 포인터에 data_length만큼 data copy

	NETLINK_CB(skb_out).dst_group = 0;

	/*
	 * nlmsg_unicast : 특정 pid와 1:1통신
	 * netlink_socket : 메세지 보내는 데 사용할 커널 Netlink Socket pointer
	 * skb_out : message buffer (헤더랑 payload 담김)a
	 * monitor_pid : 대상 프로세스 PID (아마 동적으로 설정할 필요가 있을듯)
	 */
	int ret = nlmsg_unicast(netlink_socket, skb_out, monitor_pid); // unicast : 1:1통신
	if (ret < 0) {
		printk(KERN_ERR "[JMW] Netlink send error!\n");
	}
}

EXPORT_SYMBOL(nl_send_msg);

void nl_recv_msg(struct sk_buff *skb) //인자로 메세지 버퍼 받음
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
		monitor_pid = sender_pid;
		printk(KERN_INFO "[JMW] Monitor pid is : %d\n", monitor_pid);
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
		return ENOMEM;	
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
