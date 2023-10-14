#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    unsigned int start = 0, end = sqrt(size), i;

    if (array == NULL)
        return (-1);

    while (end < size && array[end] < value)
    {
        printf("Value checked array[%d] = [%d]\n", end, array[end]);
        start = end;
        end += sqrt(size);
    }

    printf("Value found between indexes [%d] and [%d]\n", start, end);

    for (i = start; i <= end && i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
