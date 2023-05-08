#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *fname);
void close_file(int fd);

/**
 * create_buffer - Buffer bite = 1024.
 * @fname: File Name for buffer character storing.
 * Return: To the new buffer.
 */
char *create_buffer(char *fname)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fname);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Descriptor close.
 * @fid: Descriptor to close.
 */
void close_file(int fid)
{
	int r;

	r = close(fid);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fid %d\n", fid);
		exit(100);
	}
}

/**
 * main - content copy to another file
 * @argsp: Arguments supplied for program.
 * @pafa: Pointer arry for arguments.
 * Return: Return 0 if succsess.
 * Description: Incorrect argumment count - exit code 97.
 * If file_from Cannot be read or dosnt exit  - exit code 98.
 * If file_to Cannot be created or written - exit code 99.
 * If file_to Cannot be closed - exit code 100.
 */
int main(int argsp, char *pafa[])
{
	int opo, opt, rd, wr;
	char *buffer;

	if (argsp != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(pafa[2]);
	opo = open(pafa[1], O_RDONLY);
	rd = read(opo, buffer, 1024);
	opt = open(pafa[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (opo == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", pafa[1]);
			free(buffer);
			exit(98);
		}

		wr = write(opt, buffer, rd);
		if (opt == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", pafa[2]);
			free(buffer);
			exit(99);
		}

		rd = read(opo, buffer, 1024);
		opt = open(pafa[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(opo);
	close_file(opt);

	return (0);
}
