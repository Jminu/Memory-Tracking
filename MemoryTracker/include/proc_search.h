#ifndef PROC_SEARCH_H
#define PROC_SEARCH_H

#include <stdio.h>

FILE *open_proc_stat(pid_t pid);
long get_proc_mem_info(FILE *status_fd);


#endif
