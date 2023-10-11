#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using the linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
        size_t i;

        /* Check if the array is NULL */
        if (array == NULL)
                return (-1);

        /* Iterate through the array */
        for (i = 0; i < size; i++)
        {
                printf("Value checked array[%ld] = [%d]\n", i, array[i]);

                /* Check if the current element matches the value */
                if (array[i] == value)
                        return (i);
        }

        /* Value not found, return -1 */
        return (-1);
}
