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
    unsigned int start = 0, end = sqrt(size), i, k;

    if (array == NULL)
        return (-1);
    while (array[end] <= value && end < size)
    {
        start = end;
        end += sqrt(size);
        if (end > size - 1)
            end = size;
    }

    for (i = start; i < end; i++)
    {
        for (k = start; k < end; k++)
        {
            printf("Value checked array[%d] = [%d]\n", k, array[k]);
            if (array[i] == value)
            {
                printf("Value found between indexes [%d] and [%d]\n", start, end);
                return (i);
            }
        }
    }
    return (-1);
}

