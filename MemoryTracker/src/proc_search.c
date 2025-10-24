#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

FILE *open_proc_stat(pid_t pid) {
	FILE *dir_fd = NULL;
	char dir_name[] = "/proc/";
	char proc_num[16];
	char ch[] = "/status";

	sprintf(proc_num, "%d", pid);

	char full_proc_path[64];
	snprintf(full_proc_path, sizeof(full_proc_path), "%s%s%s", dir_name, proc_num, ch);

	dir_fd = fopen(full_proc_path, "r");
	if (dir_fd < 0) {
		perror("Open Error!");
		exit(1);	
	}
	printf("Open Success!\n");
	
	return dir_fd;
}

void get_proc_mem_info() {

}

int main(void) {
	pid_t pid = 0;
	printf(">>>");
	scanf("%d", &pid);

	FILE *fd = open_proc_stat(pid);
	

	return 0;
}
