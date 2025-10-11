#ifndef _NETLINK_HOOK_H
#define _NETLINK_HOOK_H

#include <linux/types.h>
#include <linux/pid.h>

/*
 * ------------------------------------------------
 * 1. Netlink Protocol and Message Types (공통 규약)
 * ------------------------------------------------
 * * NOTE: 이 매크로들은 include/uapi/linux/netlink_monitor.h와 같은 
 * 유저-커널 공통 헤더에 정의하는 것이 표준이지만, 
 * 간단한 프로젝트를 위해 여기에 통합합니다.
 */

#define NETLINK_JMW 30  // Netlink 프로토콜 ID
#define NL_MSG_REG  1   // 유저 앱에서 커널로 보내는 등록 메시지 타입

/*
 * ------------------------------------------------
 * 2. Data Structure (커널 <-> 유저 간에 주고받는 Payload)
 * ------------------------------------------------
 */

// 유저 공간으로 전송할 시스템 콜 정보 구조체
struct syscall_data {
	pid_t pid;
    // 향후 brk 주소, 프로세스 이름 등의 정보를 여기에 추가하세요.
};


/*
 * ------------------------------------------------
 * 3. Kernel API Declaration (다른 커널 파일에서 사용할 함수)
 * ------------------------------------------------
 */

// nl_send_msg 함수 원형 선언
// 이 함수는 brk 핸들러 내부 등에서 호출됩니다.
void nl_send_msg(pid_t pid);

// 외부 파일에서 monitor_pid 변수를 참조하기 위한 extern 선언
// 이 변수는 netlink_hook.c 파일에 정의되어 있습니다.
extern pid_t monitor_pid; 


#endif /* _NETLINK_HOOK_H */
