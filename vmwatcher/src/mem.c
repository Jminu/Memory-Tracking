#include <stdio.h>
#include <string.h>
#include "type.h"

#define MAX_LINE_LENGTH 128

static long get_VmSize(FILE *status_fd) {
    char line[MAX_LINE_LENGTH];
    long vm_size = -1;
    char unit[3];

    while(fgets(line, sizeof(line), status_fd) != NULL) {
        if (strncmp(line, "VmSize:", 7) == 0) {
            if (sscanf(line, "VmSize: %ld %4s", &vm_size, unit) != 0) {
				return vm_size;
			}
        }
    }
    return -1;
}

static long get_VmRss(FILE *status_fd) {
    char line[MAX_LINE_LENGTH];
    long vm_rss = -1;
    char unit[3];

    while(fgets(line, sizeof(line), status_fd) != NULL) {
        if (strncmp(line, "VmRSS:", 6) == 0) {
            if (sscanf(line, "VmRSS: %ld %4s", &vm_rss, unit) != 0) {
				return vm_rss;
			}
        }
    }
    return -1;
}

MEM_INFO get_mem_info(FILE *status_fd) {
    long VmRSS = -1;
    long VmSize = -1;

    VmRSS = get_VmRss(status_fd);
    rewind(status_fd);
    VmSize = get_VmSize(status_fd);

    MEM_INFO mem_info;
    mem_info.vm_rss = VmRSS;
    mem_info.vm_size = VmSize;

    return mem_info;
}
