#include "main.h"

/**
 * binary_to_uint - Binary number conversion to an unsigned int.
 * @o: String of 0 and 1 chars
 *
 * Return: number that is converted, else 0
 */
unsigned int binary_to_uint(const char *o)
{
	int m;
	unsigned int n;

	n = 0;
	if (!o)
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
	return (n);
}
