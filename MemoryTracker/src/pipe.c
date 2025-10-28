#include <unistd.h>

int set_pipe() {
	int fd[2];

	if (pipe(fd) == -1) {
		perror("Pipe Error");
		exit(1);
	}

	
}
