#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low = 0, i, high = size - 1, mid;

    if (array == NULL || low > high)
        return (-1);
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        printf("Searching in array: %d", array[low]);
        for (i = low + 1; i <= high; i++)
        {
            printf(", %d", array[i]);
        }
        printf("\n");

        if (value == array[mid])
            return (mid);
        else if (value < array[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return (-1);
}

