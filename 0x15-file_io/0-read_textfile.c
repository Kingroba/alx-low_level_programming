#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- STDOUT(Read text file to output)
 * @filename: File being read(Text)
 * @letters: Letters QTY to be read
 * Return: Actual number of bytes to be Read&Print wp
 * If fails 0 else filename will be NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mal;
	ssize_t op;
	ssize_t wp;
	ssize_t rd;

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	mal = malloc(sizeof(char) * letters);
	rd = read(op, mal, letters);
	wp = write(STDOUT_FILENO, mal, rd);

	free(mal);
	close(op);
	return (wp);
}
