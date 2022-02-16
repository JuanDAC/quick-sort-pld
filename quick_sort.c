#include "quick_sort.h"

void swap(int *array, int x, int y)
{
    int temp = array[x];
    array[x] = array[y];
    array[y] = temp;
}

void quick_sort(int *array, size_t size)
{
    int change = 0, moving = 0, pivot = size - 1;
    bool next = true;

    if (size == 0)
        return;

    while (1)
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
