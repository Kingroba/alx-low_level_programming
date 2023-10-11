#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Definition of a singly linked list node.
 *
 * @n: Integer value stored in the node.
 * @index: Position of the node in the list.
 * @next: Pointer to the next node in the list.
 *
 * Description: This structure defines a node in a singly linked list.
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Definition of a singly linked list with an express lane.
 *
 * @n: Integer value stored in the node.
 * @index: Position of the node in the list.
 * @next: Pointer to the next node in the list.
 * @express: Pointer to the next node in the express lane.
 *
 * Description: This structure defines a node in a singly linked list
 *              with an additional "express lane" for faster traversal.
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */

/**
 * jump_search - Searches for a value in an array using jump search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */

/**
 * interpolation_search - Searches for a value in an array using interpolation search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */

/**
 * exponential_search - Searches for a value in a sorted array using exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */

/**
 * advanced_binary - Searches for a value in a sorted array using advanced binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */

/**
 * jump_list - Searches for a value in a linked list using jump search.
 * @list: Pointer to the first node of the list.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the node containing the value if found, otherwise NULL.
 */

/**
 * linear_skip - Searches for a value in a linked list with an express lane.
 * @list: Pointer to the first node of the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the node containing the value if found, otherwise NULL.
 */

#endif /* SEARCH_ALGOS_H */

