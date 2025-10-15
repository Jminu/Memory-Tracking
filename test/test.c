#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int size = 10;
	while(1){
		printf("[PID] : %d\n", getpid());
		int *p = (int *)malloc(size);
		if (p == NULL) {
			perror("malloc failed!\n");
			return 0;
		}
		sleep(1);
		size *= 10;
	}

	return 0;
}

