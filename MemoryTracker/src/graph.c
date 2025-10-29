#include <stdio.h>
#include <string.h>
#include "ui.h"
#include "log.h"

#define MAX_BAR_LENGTH 50 

static double get_ratio(long VmRSS, long VmSize) {
	double ratio = 0;
	ratio = ((double)VmRSS / VmSize) * 100;
	return ratio;
}

void print_ratio_graph(long VmRSS, long VmSize) {
	double ratio = get_ratio(VmRSS, VmSize);

	if (ratio < 0) {
		log_msg("Ratio Error");
		return;
	}

	/* move cursor */
	cursor_to(BAR_ROW, BAR_COL_START);
	clear_line();

	printf("VmRSS: %ld VmSize: %ld ", VmRSS, VmSize);
	printf("Ratio: %.2f% ");

	/* draw bar graph */
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
