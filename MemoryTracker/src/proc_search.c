#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include "proc_search.h"
#include "graph.h"
#include "log.h"
#include "ui"

#define MAX_LINE_LENGTH 128

FILE *open_proc_stat(pid_t pid) {
	FILE *status_fd = NULL;
	char dir_name[] = "/proc/";
	char proc_num[16];
	char ch[] = "/status";

	sprintf(proc_num, "%d", pid);

	char full_proc_path[64];
	snprintf(full_proc_path, sizeof(full_proc_path), "%s%s%s", dir_name, proc_num, ch);

	status_fd = fopen(full_proc_path, "r");
	if (status_fd == NULL) {
		perror("Open Error!");
		exit(1);
	}
	log_msg("[FILE] /proc/%d/status Open Success", pid);
	
	return status_fd;
}
