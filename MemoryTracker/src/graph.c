#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 128
#define MAX_BAR_LENGTH 50

long get_VmSize_size(FILE *status_fd) {
	char line[MAX_LINE_LENGTH];
	long vm_size = -1;
	char unit[3];

	while(fgets(line, sizeof(line), status_fd) != NULL) {
		if (strncmp(line, "VmSize:", 7) == 0) {
			if (sscanf(line, "VmSize: %ld %4s", &vm_size, unit) != 0) {
				printf("VMSIZE : %ld\n", vm_size);
				return vm_size;
			}
		}
	}
	return -1; //Error
}

double get_ratio(long VmRSS, long VmSize) {
	double ratio = 0;
	ratio = ((double)VmRSS / VmSize) * 100;
	printf("%f\n", ratio);
	return ratio;
}

void print_ratio_graph(double ratio) {
	if (ratio < 0) {
		printf("Ratio Error\n");
		return;
	}
	
	printf(" [");

	int bar_length = ( ratio / 100 ) * MAX_BAR_LENGTH;
	for (int i = 0; i < bar_length; i++) {
		printf("|");
	}

	for (int i = 0; i < MAX_BAR_LENGTH - bar_length; i++) {
		printf(" ");
	}
	printf(" ]\n");
	
}
