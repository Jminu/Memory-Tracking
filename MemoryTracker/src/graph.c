#include <stdio.h>
#include <string.h>
#include "ui.h"
#include "log.h"

#define MAX_BAR_LENGTH 50 
#define BAR_ROW_POS 5
#define BAR_COL_POS 1

static double get_ratio(long VmRSS, long VmSize) {
	double ratio = 0;
	ratio = ((double)VmRSS / VmSize) * 100;
	return ratio;
}

void print_ratio_graph(long VmRSS, long VmSize, FILE *log_fd) {
	double ratio = get_ratio(VmRSS, VmSize);

	if (ratio < 0) {
		log_msg("Ratio Error");
		return;
	}

	/* move cursor and log msg*/
	cursor_to(BAR_ROW_POS, BAR_COL_POS);
	// printf("VmRSS: %ld VmSize: %ld", VmRSS, VmSize);
	log_msg_file(log_fd, "VmRSS: %ld VmSize: %ld", VmRSS, VmSize);

	cursor_to(BAR_ROW_POS + 1, BAR_COL_POS);
	// printf("Ratio: %.2f%%", ratio);
	log_msg_file(log_fd, "Ratio: %.2f%%", ratio);

	/* draw bar graph */
	cursor_to(BAR_ROW_POS + 2, BAR_COL_POS);
	printf("[");

	int bar_length = ( ratio / 100 ) * MAX_BAR_LENGTH;
	for (int i = 0; i < bar_length; i++) {
		printf("|");
	}

	for (int i = 0; i < MAX_BAR_LENGTH - bar_length; i++) {
		printf(" ");
	}
	printf("]\n");
}
