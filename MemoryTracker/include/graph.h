#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>

long get_VmSize_size(FILE *status_fd);
double get_ratio(long VmRSS, long VmSize);
void print_ratio_graph(double ratio);

#endif
