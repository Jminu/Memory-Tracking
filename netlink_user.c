#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <linux/netlink.h>
#include <sys/socket.h>
#include <errno.h>
#include <unistd.h>

#define NETLINK_JMW 30
#define MAX_PAYLOAD 1024

struct brk_data {
	pid_t pid;
};

int main(void)
{
	struct sockaddr_nl src_addr;
	struct sockaddr_nl dest_addr;
	struct iovec iov;
	struct msghdr msg;

	int sock_fd = socket(PF_NETLINK, SOCK_RAW, NETLINK_JMW);
	if (sock_fd < 0) {
		perror("[ERROR] 소켓 생성 실패!\n");
		return -1;
	}

	memset(&src_addr, 0, sizeof(src_addr)); // src_addr 초기화
	src_addr.nl_family = AF_NETLINK;
	src_addr.nl_pid = getpid();

	if (bind(sock_fd, (struct sockaddr*)&src_addr, sizeof(src_addr)) < 0) {
		perror("[ERROR] 소켓 바인딩 실패!\n");
		close(sock_fd);
		return -1;
	}

	memset(&dest_addr, 0, sizeof(dest_addr));
	memset(&msg, 0, sizeof(msg));


}
