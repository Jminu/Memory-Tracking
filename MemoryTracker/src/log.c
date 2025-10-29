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
void log_msg(int argc, ...) {

	va_list ap; // 가변인자 목록 포인터
	va_start(ap, argc);

	get_cur_time();
	printf("[%s] ", t_buf);

	for (int i = 0; i < argc; i++) {
		const char *str_arg = va_arg(ap, const char *);
		if (str_arg != NULL) {
			printf("%s ", str_arg);
		}
	}
	printf("\n");
	fflush(stdout);


	va_end(ap); // 가변인자 목록 포인터 초기화
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
