#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <linux/netlink.h>

// 커널과 동일한 프로토콜 ID 및 구조체 정의
#define NETLINK_JMW 30
#define MAX_PAYLOAD 1024 // 메시지 페이로드의 최대 크기

struct syscall_data {
    pid_t pid;
};

int main(int argc, char **argv) {
    int nl_socket_fd;
    struct sockaddr_nl src_addr;
    struct sockaddr_nl dest_addr;
    struct nlmsghdr *nlh = NULL;
    struct iovec iov;
    struct msghdr msg;
    
    // Kernel쪽에서 데이터 수신받을 버퍼 
    char buffer[MAX_PAYLOAD];
    struct syscall_data *received_data;

    printf("[USER] Starting Netlink listener (Protocol: %d)\n", NETLINK_JMW);

    /*
     * create Netlink Socket
     * use AF_NETLINK, SOCK_RAW protocol ID
     */
    nl_socket_fd = socket(AF_NETLINK, SOCK_RAW, NETLINK_JMW);
    if (nl_socket_fd < 0) {
        perror("[USER] Error: Failed to create Netlink socket");
        return -1;
    }

    /*
     * memset : src_addr 구조체 0으로 초기화
     * nl_family
     * nl_pid : 발신자 pid
     * nl_groups : 멀티캐스트 그룹에 있는가? -> 여기서는 유니캐스트이므로 0
     */
    memset(&src_addr, 0, sizeof(src_addr));
    src_addr.nl_family = AF_NETLINK;
    src_addr.nl_pid = getpid(); 
    src_addr.nl_groups = 0; 

    if (bind(nl_socket_fd, (struct sockaddr *)&src_addr, sizeof(src_addr)) < 0) {
        perror("[USER] Error: Failed to bind Netlink socket");
        close(nl_socket_fd);
        return -1;
    }

    printf("[USER] Netlink socket bound (PID: %d). Waiting for messages from Kernel...\n", getpid());
    printf("====================================================\n");

    /*
     * allocate buffer for 커널에서 수신받은 메세지
     */
    nlh = (struct nlmsghdr *)malloc(NLMSG_SPACE(MAX_PAYLOAD));
    if (!nlh) {
        perror("[USER] Error: Failed to allocate NLMSG buffer");
        close(nl_socket_fd);
        return -1;
    }

   /*
    * struct iovec iov
    * struct msghdr msg
    *
    * iovec, msghdr for Linux Socket Communication (recvmsg, sendmsg)
    */
    memset(&iov, 0, sizeof(iov)); 
    iov.iov_base = (void *)nlh;
    iov.iov_len = NLMSG_SPACE(MAX_PAYLOAD);

    memset(&msg, 0, sizeof(msg));
    msg.msg_iov = &iov;
    msg.msg_iovlen = 1;

    while (1) {
        // wait for Kernel Message. (Blocking Read)
        int len = recvmsg(nl_socket_fd, &msg, 0); 
        
        if (len < 0) {
            perror("[USER] Error during recvmsg");
            continue;
        }

        // 메시지 헤더를 통해 실제 데이터 페이로드 시작 위치를 찾습니다.
        received_data = (struct syscall_data *)NLMSG_DATA(nlh);
        
        // 수신된 데이터를 출력합니다.
        printf("[RECEIVE] Received data length: %zu bytes\n", sizeof(*received_data));
        printf(" -> Hooked Process PID: %d\n", received_data->pid);
        printf("====================================================\n");
    }

    free(nlh);
    close(nl_socket_fd);
    return 0;
}
