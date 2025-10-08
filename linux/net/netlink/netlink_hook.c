#include <module.h>
#include <linux/kernel.h>
#include <linux/netlink.h>
#include <asm/types.h>
#include <net/net_namespace.h>
#include <net/sock.h>
#include <linux/pid.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("JMW");

#define NETLINK_JMW 30

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
	size_t msg_size;
	struct sk_buff *skb_out;
	struct nlmsghdr *nlh;

	data.pid = pid;
	int data_length = sizeof(data);

	skb_out = nlmsg_new(data_len, 0);
	if (!skb_out) {
		printk(KERN_INFO "[JMW] Netlink Alloc failed!\n");
		return;
	}


}	

/*
 * 	모듈 초기화 / 종료
 */
static int __init netlink_init(void)
{
	struct netlink_kernel_cfg config = {
		.input = netlink_recv_msg; // 수신 핸들러
	};

	netlink_socket = netlink_kernel_create(&init_net, NETLINK_JMW, &config);
	if (!netlink_socket) {
		printk(KERN_INFO "[JMW] Netlink Socket creation failed!\n");
		exit(0);
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
