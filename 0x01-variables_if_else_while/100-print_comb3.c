#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combination of two digits
 * Numbers must be separated by ,, followed by a space
 * the two digits must be diffrent
 * 01 and 10 are considerd the same combination of the two digits 0 and 1
 * print only the smallest combination of two digits
 * numbers should be printed in accending order, with two digits
 * you can only use the putchar five times maximum in your code
 * you are not allowed to use any variable of type char
 * all your code should be in the main function
 * Return: 0
 */
int main(void)

	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d ! =c && d < c)
			{	
				putchar('0' + d);
				putchar('0' + c);

					if (c + d != 17)
					{		
						putchar(',');
						putchar(' ');
					}	
			}

			c++;
		}
		
		d++;
	}
	putchar('\n');
	return (0);

