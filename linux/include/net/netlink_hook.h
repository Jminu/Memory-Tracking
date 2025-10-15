#ifdef __LINUX_NETLINK_HOOK_H
#define __LINUX_NETLINK_HOOK_H

extern void nl_send_msg(pid_t pid);
extern void nl_recv_msg(struct sk_buff *skb);

#endif
