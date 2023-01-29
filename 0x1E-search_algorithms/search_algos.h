#ifndef search_algos.h
#define search_algos.h
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *array, size_t size, int left);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
