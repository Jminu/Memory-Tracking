#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <sys/time.h>

static char t_buf[64];

static void get_cur_time();

/*
 *	가변인자 타입
 *	argc: 가변인자 수
 */
void log_msg(const char *format, ...) {
	va_list args; // 가변인자 목록 포인터
	va_start(args, format);

	get_cur_time();
	printf("[%s] ", t_buf);
	vprintf(format, args);

	va_end(args);
	printf("\n");
	fflush(stdout);
}

/*
 *	현재 시간 msec 반환
 */
static void get_cur_time() {
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);

	long sec = ts.tv_sec;
	long nsec = ts.tv_nsec;
	long msec = nsec / 1000000;

	snprintf(t_buf, sizeof(t_buf), "%ld.%03ld", sec, msec);
}

/*
 * 실행 시 인자를 받아서
 * 파일로써 기록할 수 있도록
 */
void write_log_to_file() {
	
}