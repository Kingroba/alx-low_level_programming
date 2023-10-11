#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value);

/**
 * recurse_helper - recursive implementation of binary search
 * @array: pointer to the first element of the array
 * @left: the leftmost index of the subarray
 * @right: the rightmost index of the subarray
 * @value: the value to search for
 *
 * Return: the index of the value if found, otherwise -1
 */
int recurse_helper(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value);

