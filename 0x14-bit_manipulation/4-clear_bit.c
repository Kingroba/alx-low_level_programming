#include "main.h"

/**
 * clear_bit - is a function to set value of bit to 0 at a given index.
 * @r: Number for r
 * @index: bit we can set that start from 0
 * Return: if it worked 0, else return -1 on error 
 */

int clear_bit(unsigned long int *b, unsigned int index)
{
	unsigned long int r;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	r = ~(1 << index);
	*b = *b & r;

	return (1);
}

