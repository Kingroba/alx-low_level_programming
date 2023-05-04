#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character r to stdout
 * @r: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char r)
{
	return (write(1, &r, 1));
}
