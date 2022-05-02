#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_buffer - init of the write buffer
 * @filename: - the name of the file
 *
 * Return: pointer to the buffer
 *
 */
char *init_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * _close - close file
 * @fd: file descriptor
 *
 */
void _close(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: the number of arguments
 * @argv: array of arguments.
 *
 * Return: the exit code.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = init_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rd = read(file_from, buffer, 1024);

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(file_to, buffer, rd);
		if (wr == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	_close(file_from);
	_close(file_to);

	return (0);
}
