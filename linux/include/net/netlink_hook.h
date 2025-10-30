#ifndef __LINUX_NETLINK_HOOK_H
#define __LINUX_NETLINK_HOOK_H

#include <linux/types.h>
#include <linux/skbuff.h>

extern void nl_send_msg(pid_t pid, const char *syscall_name);
extern void nl_recv_msg(struct sk_buff *skb);

#endif
