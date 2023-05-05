#include "main.h"
/**
 * get_endianness - endianness check 
 *
 * Return: if big endian 0, else for small endian 1
 */
int get_endianness(void)
{
	int r;
	char *o;

	r = 1;
	o = (char *)&r;

	return (*o);
}

