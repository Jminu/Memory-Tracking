#ifndef USER_NETLINK_HOOK_H
#define USER_NETLINK_HOOK_H

#include <sys/types.h>
#include <sys/socket.h>
#include <linux/netlink.h>

void send_registration(int nl_socket_fd, struct sockaddr_nl *src_addr);
int set_nl_socket();
void listen_syscall();

#endif
