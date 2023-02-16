#include <stdio.h>
/**
 * main - A program that print the size of various coputer types
 * Return: 0 (Success)
 */
int main(void)
{
char r;
int o;
long int b;
long long int e;
float l;

printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(o));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(l));
return (0);
}
