#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

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
	printf("[FILE] /proc/%d/status Open Success!\n", pid);
	
	return status_fd;
}

long get_proc_mem_info(FILE *status_fd) {
	char line[MAX_LINE_LENGTH];
	long vm_rss = -1;
	char unit[3];

	while (fgets(line, sizeof(line), status_fd) != NULL) {
		if (strncmp(line, "VmRSS:", 6) == 0) {
			if (sscanf(line, "VmRSS: %ld %4s", &vm_rss, unit) != 0) {
				return vm_rss;
			}
		}
	}
	return -1; // Error
}

/*
 * Use Example
 */
int main(void) {
	pid_t pid = 0;
	printf(">>>");
	scanf("%d", &pid);

	FILE *fd = open_proc_stat(pid);
	long vm_rss = get_proc_mem_info(fd);
	

	printf("[PID]: %d, [VmRSS]: %ld\n", pid, vm_rss);
	fclose(fd);

	return 0;
}
