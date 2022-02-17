#include "quick_sort.h"


void to_move(int *array, int pivot, int *moving)
{
    if (array[*moving] >= array[pivot])
        return;
    (*moving)++;
}

int moving_to_pivot(int *array, int pivot, int change, int *moving)
{
    if (*moving > pivot)
        return change;

    if (array[pivot] >= array[*moving])
        swap(array, change, *moving), change++;

    (*moving)++;
    return moving_to_pivot(array, pivot, change, moving);
}

void quick_sort_recursive(int *array, size_t size)
{
    int change = 0, moving = 0, pivot = size - 1, new_size = 0;

    if (size <= 1)
        return;

    to_move(array, pivot, &moving);

    change = moving_to_pivot(array, pivot, moving, &moving);

    swap(array, change, moving - 1);

    new_size = change - 1;
    quick_sort_recursive(array, new_size);
    quick_sort_recursive(array + change + 1, size - new_size);
}
