#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int b;

    b = 1024;
    set_bit(&b, 5);
    printf("%lu\n", b);
    b = 0;
    set_bit(&b, 10);
    printf("%lu\n", b);
    b = 98;
    set_bit(&b, 0);
    printf("%lu\n", b);
    return (0);
}
