#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = NULL;
	
	printf("start assign!\n");
	p = malloc(10);
	if (p == NULL) {
		perror("failed!\n");
	}
	printf("assign mem!\n");
	free(p);

	return 0;
}

