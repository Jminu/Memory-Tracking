#ifndef UI_H
#define UI_H

#include <stdio.h>

static inline void cursor_to(int row, int col) {
	printf("\033[%d;%dH", row, col);
	fflush(stdout);
}

static inline void clear_line() {
	printf("\033[K");
	fflush(stdout);
}

static inline void clear_screen() {
	printf("\033[2J");
	cursor_to(1, 1);
	fflush(stdout);
}

#endif
