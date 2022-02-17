# Quick sort PLD

## Description

Quicksort is a divide-and-conquer algorithm. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. For this reason, it is sometimes called partition-exchange sort.[4] The sub-arrays are then sorted recursively. This can be done in-place, requiring small additional amounts of memory to perform the sorting. <sub><a  href="https://en.wikipedia.org/wiki/Quicksort"  target="_blank">more</a></sub>

## Time complexity

| Best Case  | Average Case |    Worst Case    |
| :--------: | :----------: | :--------------: |
| O(n log n) |  O(n log n)  | O(n<sup>2</sup>) |

## Quick sort function

```c
void quick_sort(int *array, size_t size);
```

- **Warning**
  This function makes changes to the array it receives
- **Description**
  Sorts an array using the quick sort algorithm
- **Parameters**
  `array` array of numbers to sort
  `size` size of the array to sort
- **Return**
  Always void

## Implementation

```c

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

```
