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
 * puts_half -  prints half of a string, followed by a new line.
 * @str: string whose length should be return
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);
	int n;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	i = len - n;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
