#ifndef UI_H
#define UI_H

#include <stdio.h>

/*
 * 커서를 [row][col]에 위치시킨다.
 */
static inline void cursor_to(int row, int col) {
	printf("\033[%d;%dH", row, col);
	fflush(stdout);
}

/*
 * 위치한 행에서 n열부터 m열까지를 지운다.
 */
static inline void clear_line_n2m(int n, int m) {
	printf("\033[%dG", n);
	for(int i = 0; i <= m - n; i++){
		putchar(' ');
	}
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
