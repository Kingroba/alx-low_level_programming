#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int s;

    s = 1024;
    clear_bit(&s, 10);
    printf("%lu\n", s);
    s = 0;
    clear_bit(&s, 10);
    printf("%lu\n", s);
    s = 98;
    clear_bit(&s, 1);
    printf("%lu\n", s);
    return (0);
}
