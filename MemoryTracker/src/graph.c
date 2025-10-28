#include <stdio.h>
#include <string.h>
#define MAX_BAR_LENGTH 50

static double get_ratio(long VmRSS, long VmSize) {
	double ratio = 0;
	ratio = ((double)VmRSS / VmSize) * 100;
	return ratio;
}

void print_ratio_graph(long VmRSS, long VmSize) {
	double ratio = get_ratio(VmRSS, VmSize);

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
