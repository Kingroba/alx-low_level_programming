#include "main.h"

/**
 * set_bit - set bit on  given index to 1
 * @n: is a pointer to change the number
 * @index: will set the index of the bit to 1
 * Return: If correct 1, and if incorrect -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
