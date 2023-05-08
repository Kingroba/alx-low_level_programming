#include "main.h"

/**
 * create_file - File Creation.
 * @filename: Is a pointer for the name of the file to be created.
 * @text_content: Pointer to string for file write.
 * Return: Function fails -1, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
