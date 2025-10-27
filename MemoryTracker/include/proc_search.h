#ifndef PROC_SEARCH_H
#define PROC_SEARCH_H

#include <stdio.h>

typedef struct mem_info {
	long vm_rss;
	long vm_size;
} MEM_INFO;

FILE *open_proc_stat(pid_t pid);
MEM_INFO get_proc_mem_info(FILE *status_fd);


#endif
