#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string whose length should be return
 *
 * Return: (int) the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: the file content
 *
 * Return: 1 if success else -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t len = 0, op, wr;

	if (!filename)
		return (-1);

	len = _strlen(text_content);
	op = open(filename, O_CREAT | O_WRONLY, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (op);
	return (1);
}
