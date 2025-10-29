#include "user_netlink_hook.h"
#include <stdio.h>
#include <stdlib.h>
#include "ui.h"
#include "log.h"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		perror("argc Error");
		return 1;
	}

	char dir_name[] = "./logs/";
	char file_name[64];
	char full_path[128];

	strcpy(file_name, argv[1]);
	snprintf(full_path, sizeof(full_path), "%s%s", dir_name, file_name);

	cursor_to(1, 1);
	log_msg("Log파일 경로: %s", full_path);

	FILE *log_fd = NULL;
	log_fd = fopen(full_path, "w");
	if (log_fd == NULL) {
		perror("Log file open error");
		return 1;
	}
	
	run();
}
