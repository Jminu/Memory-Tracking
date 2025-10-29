#ifndef TYPE_H
#define TYPE_H

typedef struct mem_info {
    long vm_rss;
    long vm_size;
} MEM_INFO;

typedef struct pipe_data {
    pid_t hooked_pid;
    int syscall_cnt;
} PIPE_DATA

#endif