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
void log_msg_file(FILE *log_fd, const char *format, ...) {
	va_list args; // 가변인자 목록 포인터
	va_start(args, format);

	get_cur_time();
	printf("[%s] ", t_buf);
	vprintf(format, args);

	va_end(args);
	printf("\n");
	fflush(stdout);

	if (log_fd == NULL) {
		perror("LOG FILE FD ERROR");
		return;
	}

	/*
	 *	log file에 write
	 */
	va_start(args, format);
	fprintf(log_fd, "[%s] ", t_buf);
	vfprintf(log_fd, format, args);
	va_end(args);
	fprintf(log_fd, "\n");
	fflush(log_fd);
}

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