#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <linux/netlink.h>
#include "proc_search.h"
#include "graph.h"
#include "type.h"
#include "mem.h"

// 커널과 동일한 프로토콜 ID 및 구조체 정의
#define NETLINK_JMW 30
#define MAX_PAYLOAD 1024 // max message payload size 
#define NL_MSG_REG 1

struct syscall_data {
    pid_t pid;
};

static void send_registration(int nl_socket_fd, struct sockaddr_nl *src_addr) {
    struct nlmsghdr *nlh = NULL;
    struct sockaddr_nl dest_addr;
    struct iovec iov;
    struct msghdr msg;

    char *reg_msg = "REGISTER_APP";
    int reg_len = strlen(reg_msg) + 1; // reg_len = 13

    
    /*
     *	allocate message buffer for Register Message to Main Kernel
     */ 
    nlh = (struct nlmsghdr *)malloc(NLMSG_SPACE(reg_len));
    if (!nlh) {
        perror("[USER] Error: Failed to allocate registration buffer");
        return;
    }

    /*
     *	memset -> message buffer initialize with 0
     *	len
     *	type
     *	flags 지정
     *
     *	nlmsg_pid = 발신자 pid : 커널쪽에서 monitor_pid로 저장
     */ 
    memset(nlh, 0, NLMSG_SPACE(reg_len));
    nlh->nlmsg_len = NLMSG_SPACE(reg_len);
    nlh->nlmsg_type = NL_MSG_REG;
    nlh->nlmsg_flags = 0;
    nlh->nlmsg_pid = src_addr->nl_pid;

    //copy data to payload 
    strcpy(NLMSG_DATA(nlh), reg_msg);

    /*
     * 	set destination
     * 	destination is Main Kernel (PID = 0)
     */ 
    memset(&dest_addr, 0, sizeof(dest_addr));
    dest_addr.nl_family = AF_NETLINK;
    dest_addr.nl_pid = 0; // 커널의 PID
    dest_addr.nl_groups = 0;

    // msg 구조체 설정
    memset(&iov, 0, sizeof(iov));
    iov.iov_base = (void *)nlh;
    iov.iov_len = nlh->nlmsg_len;

    memset(&msg, 0, sizeof(msg));
    msg.msg_name = (void *)&dest_addr;
    msg.msg_namelen = sizeof(dest_addr);
    msg.msg_iov = &iov;
    msg.msg_iovlen = 1;

    // 전송
    if (sendmsg(nl_socket_fd, &msg, 0) < 0) {
        perror("[USER] Error: Failed to send registration message");
    } else {
        printf("[USER] Registration message sent successfully (PID: %d).\n", src_addr->nl_pid);
    }

    free(nlh);
}

static int set_nl_socket() {
	int nl_socket_fd;
	struct sockaddr_nl src_addr;
	struct sockaddr_nl dest_addr;

	// Kernel에서 데이터 수신받은거 저장할 버퍼
	char buffer[MAX_PAYLOAD];
	struct syscall_data *received_data;

	/*
	 *	Create Netlink Socket
	 *	use AF_NETLINK, SOCK_RAW, NETLINK_JMW=protocol 30
	 *
	 */
	printf("[USER] Creating Netlink Listener (protocol : %d)\n", NETLINK_JMW);
	nl_socket_fd = socket(AF_NETLINK, SOCK_RAW, NETLINK_JMW); // netlink socket fd 생성
	if (nl_socket_fd < 0) {
		perror("[USER] Error : Failed to create Netlink Socket");
		return -1;
	}
	printf("[USER] Complete Create Socket\n");
	sleep(1);

	/*
	 * 	memset으로 src_addr 0으로 초기화
	 * 	nl_family를 AF_NETLINK
	 * 	nl_pid : 송신자 pid - 커널쪽 netlink에 알려줌
	 * 	nl_groups = 0 : 유니캐스트
	 */
	memset(&src_addr, 0, sizeof(src_addr));
	src_addr.nl_family = AF_NETLINK;
	src_addr.nl_pid = getpid();
	src_addr.nl_groups = 0;

	/*
	 *	(struct sockaddr *)&src_addr : IP주소, port번호 저장하기 위한 변수 구조체
	 *	sizeof(src_addr) : 두번째 인자의 데이터 크기
	 *
	 */
	if (bind(nl_socket_fd, (struct sockaddr *)&src_addr, sizeof(src_addr)) < 0) {
		perror("[USER] Error : Failed to bind Netlink Socket");
		close(nl_socket_fd);
		return -1;
	}
	printf("[USER] Complete Bind\n");
	sleep(1);

	send_registration(nl_socket_fd, &src_addr); // Kernel쪽에 소켓 등록요청
	printf("[USER] Registration Complete Netlink Socket to Kernel\n");
	sleep(1);

	return nl_socket_fd;
}

void listen_syscall() {
	int nl_socket_fd = 0;
	struct nlmsghdr *nlh = NULL;
	struct iovec iov;
	struct msghdr msg;

	static int syscall_cnt = 0;

	pid_t hooked_pid = -1;
	struct syscall_data *received_data;

	nl_socket_fd = set_nl_socket(); // get netlink socket fd

	/*
	 *	buffer allocation for Kernel Message
	 *	payload will continue behind this header
	 */
	nlh = (struct nlmsghdr*)malloc(NLMSG_SPACE(MAX_PAYLOAD)); // header 설정
	if (!nlh) {
		perror("[USER] Error : Failed to allocate NLMSG buffer");
		free(nlh);
		close(nl_socket_fd);
		exit(1);	
	}

	memset(&iov, 0, sizeof(iov));
	iov.iov_base = (void *)nlh;
	iov.iov_len = NLMSG_SPACE(MAX_PAYLOAD);

	memset(&msg, 0, sizeof(msg));
	msg.msg_iov = &iov;
	msg.msg_iovlen = 1;

	printf("[USER] Complete Setting\n");
	sleep(1);
	printf("[USER] Listening...\n");

	while (1) {
		int len = recvmsg(nl_socket_fd, &msg, 0);

		if (len < 0) {
			perror("[USER] Error during recvmsg");
			free(nlh);
			close(nl_socket_fd);
			exit(1);	
		}

		received_data = (struct syscall_data*)NLMSG_DATA(nlh);
		hooked_pid = received_data->pid;
		
		FILE *fd = open_proc_stat(hooked_pid);
		MEM_INFO mem_info = get_mem_info(fd);

		syscall_cnt++;

		printf("[RECEIVED] Received data length : %zu bytes\n", sizeof(*received_data));
		printf("[SYSCALL COUNT] : %d\n", syscall_cnt);
		printf("[HOOKED PID] : %d\n", hooked_pid);
		printf("===========================================\n");
		
		print_ratio_graph(mem_info.vm_rss, mem_info.vm_size);
	}
}

int main(void) {
	listen_syscall();
	return 0;
}
