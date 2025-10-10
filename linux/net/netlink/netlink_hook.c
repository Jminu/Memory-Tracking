/*
 *	Written By Jin Minu
 */

#include <module.h>
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

struct syscall_data {
	pid_t pid;
};

/*
 *	메세지 전송 : Kernel to User
 */
void nl_send_msg(pid_t pid)
{
	struct syscall_data data;
	char *msg;
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
	 * 1 : 대상 프로세스 PID (아마 동적으로 설정할 필요가 있을듯)
	 */
	int ret = nlmsg_unicast(netlink_socket, skb_out, 1); // unicast : 1:1통신
	if (ret < 0) {
		printk(KERN_ERR "[JMW] Netlink send error!\n");
	}
}

EXPORT_SYMBOL(nl_send_msg);

void nl_recv_msg()
{
	/*
	 *	User Space에서 받을 정보 없음
	 */
}

/*
 * 	모듈 초기화 / 종료
 */
static int __init netlink_init(void)
{
	struct netlink_kernel_cfg config = {
		// .input = nl_recv_msg; // 수신 핸들러 -> 어차피 안씀
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
