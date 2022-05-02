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
 * append_text_to_file -  appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the content to add
 *
 * Return: 1 if success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len = 0, op, wr;

	if (!filename)
		return (-1);
	if (text_content)
		len = _strlen(text_content);

	op = open(filename, O_APPEND | O_RDWR);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (op);
	close(op);
	return (1);
}
