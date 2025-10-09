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

	// skb_out = 버퍼
	skb_out = nlmsg_new(data_len, GFP_KERNEL); // Socket buffer allocation
	if (!skb_out) {
		printk(KERN_ERR "[JMW] Netlink Alloc failed!\n");
		return;
	}

	// netlink 메세지 헤더
	nlh = nlmsg_put(skb_out, 0, 0, NETLINK_JMW, data_length, 0);
	if (!nlh) {
		kfree_skb(skb_out);
		return;
	}

	// data(PID) copy
	memcpy(nlmsg_data(nlh), &data, data_len); // nlmsg_data : payload data

	NETLINK_CB(skb_out).dst_group = 0;
	int ret = nlmsg_unicast(nl_sk, skb_out, 1);
	if (ret < 0) {
		printk(KERN_ERR "[JMW] Netlink send error!\n");
	}
}

EXPORT_SYMBOL(netlink_send_msg);

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
		.input = nl_recv_msg; // 수신 핸들러 -> 어차피 안씀
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
