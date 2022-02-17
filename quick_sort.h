#ifndef QUICK_SORT
#define QUICK_SORT
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int bool;

#define false 0
#define true !false

void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
bool equals_array(int *array, size_t size, int *expected, size_t size_expected);
bool message(bool result, int *array, size_t size, int *expected, size_t size_expected);
void quick_sort_recursive(int *array, size_t size);
void swap(int *array, int x, int y);

bool test_1();
bool test_1_recursive();


#endif /* QUICK_SORT */