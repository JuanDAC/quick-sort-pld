#include "quick_sort.h"

bool test_1()
{
    bool equals = false;

    int array[] = {3, 4, 9, 1, 7, 0, 5, 2, 6, 8};
    int array_expected[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int size = sizeof(array) / sizeof(*array);
    int size_expected = sizeof(array_expected) / sizeof(*array_expected);

    printf("Execution!\n");
    quick_sort(array, size);

    equals = equals_array(array, size, array_expected, size_expected);
    return message(equals, array, size, array_expected, size_expected);
}


bool test_1_recursive()
{
    bool equals = false;

    int array[] = {3, 4, 9, 1, 7, 0, 5, 2, 6, 8};
    int array_expected[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int size = sizeof(array) / sizeof(*array);
    int size_expected = sizeof(array_expected) / sizeof(*array_expected);

    printf("Execution!\n");
    quick_sort_recursive(array, size);

    equals = equals_array(array, size, array_expected, size_expected);
    return message(equals, array, size, array_expected, size_expected);
}

bool message(bool result, int *array, size_t size, int *expected, size_t size_expected)
{
    if (result)
    {
        printf("Equals!\n");
        printf("-> Do\n\t");
        print_array(array, size);
        printf("-> Expected\n\t");
        print_array(expected, size_expected);
        return true;
    }
    printf("FAIL!\n");
    printf("\tDo\n\t");
    print_array(array, size);
    printf("\tExpected\n\t");
    print_array(expected, size_expected);
    return false;
}

bool equals_array(int *array, size_t size, int *expected, size_t size_expected)
{
    /*
     * base case
     */
    if (size == 0 || size_expected == 0)
    {
        return size == size_expected;
    }

    /*
     * if are diferente return 0
     */
    if (array[size - 1] != expected[size_expected - 1])
    {
        return false;
    }

    return equals_array(array, size - 1, expected, size_expected - 1);
}
