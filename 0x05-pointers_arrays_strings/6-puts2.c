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
	{
		i++;
	}

	return (i);
}

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string whose length should be return
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0, len = _strlen(str);

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
