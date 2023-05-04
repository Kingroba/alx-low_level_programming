#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *o)
{
	int m;
	unsigned int n;

	j = 0;
	if (!b)
		return (0);
	for (m = 0; o[m] != '\0'; m++)
	{
		if (o[m] != '0' && o[m] != '1')
			return (0);
	}
	for (m = 0; o[m] != '\0'; m++)
	{
		n <<= 1;
		if (o[m] == '1')
			n += 1;
	}
	return (j);
}
i
