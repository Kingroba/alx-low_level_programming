#include <stdio.h>

/**
 * main - Print the alphabet.
 * Return: Always 0 (Complete)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
