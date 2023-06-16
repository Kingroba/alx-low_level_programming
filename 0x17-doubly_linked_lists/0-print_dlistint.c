#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list & count nod.
 *
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
