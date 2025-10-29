#ifndef LOG_H
#define LOG_H

#include <stdio.h>

void log_msg_file(FILE *log_fd, const char *format, ...);
void log_msg(const char *format, ...);

#endif
