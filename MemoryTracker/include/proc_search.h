#ifndef PROC_SEARCH_H
#define PROC_SEARCH_H

#include <stdio.h>
#include "type.h"

FILE *open_proc_stat(pid_t pid);
MEM_INFO get_mem_info(FILE *status_fd);

#endif
