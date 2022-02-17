#include "quick_sort.h"

void quick_sort(int *array, size_t size)
{
    int change = 0, moving = 0, pivot = size - 1;

    if (size <= 1)
        return;

    while (true)
    {
        if (array[moving] >= array[pivot])
            break;
        moving++;
    }

    for (change = moving; moving <= pivot; moving++)
        if (array[pivot] >= array[moving])
            swap(array, change, moving),
                change++;

    swap(array, change, moving - 1);

    quick_sort(array, change - 1);
    quick_sort(array + change + 1, size - change - 1);
}
