#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char r);
int clear_bit(unsigned long int *b, unsigned int index);
unsigned int binary_to_uint(const char *o);
void print_binary(unsigned long int b);
unsigned int flip_bits(unsigned long int b, unsigned long int e);
int set_bit(unsigned long int *b, unsigned int index);
int get_bit(unsigned long int b, unsigned int index);
int get_endianness(void);
#endif

