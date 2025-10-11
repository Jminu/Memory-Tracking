#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int malloc_size = 10;
	int *p = NULL;
	
	printf("[TEST] PID : %d\n", getpid());
	while(1) {
		printf("[TEST] malloc occur!\n");
		p = (int *)malloc(10);
		sleep(3);
		free(p);
		malloc_size += 10;
	}
}

