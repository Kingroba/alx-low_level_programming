#include <stdio.h>

/**
 * main - print all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (n = 0; a < 10; n++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
