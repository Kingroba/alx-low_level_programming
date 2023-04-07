#include <stdio.h>
#include "main.h"

/**
 * main - is the code checker
 * Return: Return 0.
 */
int main(void)
{
	print_binary(0);
	printf("\n");
	rint_binary(1);
	printf("\n");
	rint_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}
