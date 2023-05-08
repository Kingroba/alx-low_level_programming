#include "main.h"

/**
 * append_text_to_file - Include(Append) text at end.
 * @filename: Pointer to file Name.
 * @text_content: String added at the end.
 * Return: -1 If fails or filename is NULL.
 * -1 If the file does not exist the user lacks write permissions.
 * else 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
