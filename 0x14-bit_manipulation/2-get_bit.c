#include "main.h"

/**
 * get_bit - will returns the value of a bit for index in a decimal number
 * @n: value/number to look for
 * @index: Bit index
 * Return: Bit Vlaue
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
