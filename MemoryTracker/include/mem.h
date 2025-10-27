#ifndef MEM_H
#define MEM_H
#include <stdio.h>
#include "type.h"

long get_VmSize(FILE *status_fd);
long get_VmRSS(FILE *status_fd);
MEM_INFO get_mem_info(FILE *status_fd);

#endif