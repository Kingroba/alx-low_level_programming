#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int b, unsigned long int e)
{
	unsigned long int differnce, result;
	unsigned int r, o;

	r = 0;
	result = 1;
	differnce = b ^ e;
	for (o = 0; o < (sizeof(unsigned long int) * 8); o++)
	{
		if (result == (differnce & result))
			r++;
		result <<= 1;
	}

	return (r);
}

