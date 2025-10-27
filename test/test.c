#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main()
{
	int size = 10;
	time_t t = time(NULL);

	while(1){
		printf("[TIME] : %ld [PID] : %d\n", time(NULL), getpid());
		int *p = (int *)malloc(size);
		if (p == NULL) {
			perror("malloc failed!\n");
			return 0;
		}
		sleep(2);
		size *= 2;
	}

	return 0;
}

