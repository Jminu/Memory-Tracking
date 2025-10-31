#ifndef TYPE_H
#define TYPE_H

#include <unistd.h>

typedef struct mem_info {
    long vm_rss;
    long vm_size;
} MEM_INFO;

typedef struct pipe_data {
    pid_t hooked_pid;
    char syscall_name[10];
} PIPE_DATA;

#endif