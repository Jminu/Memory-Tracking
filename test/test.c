#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	while(1){
		printf("[PID] : %d\n", getpid());
		int *p = (int *)malloc(10);
		if (p == NULL) {
			perror("malloc failed!\n");
			return 0;
		}

	}

	return 0;
}

