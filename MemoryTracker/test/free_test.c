#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void) {
	printf("%d\n", getpid());
	char p[10];
	memset(p, 9, 10 * sizeof(char));
	
	for(int i = 0; i < 10; i++) {
		printf("%d ", *(p + i));
	}

	return 0;
}
