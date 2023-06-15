#include <stddef.h>
#include "lists.h"

/**
 * size_t count - Variable to count the number of elements
 * @h: Traverse the list
 * count++: Increment the element count
 * h->next: Move to the next element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
        count++;
        h = h->next;
	}
	return count;
}
