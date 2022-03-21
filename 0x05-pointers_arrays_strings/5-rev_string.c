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
 * swap_char - swap values of two char
 * @a: first char.
 * @b: second char.
 *
 * Return: void.
 */
void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * rev_string - reverses a string,
 * followed by a new line.
 * @s: string to reverse.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int len = _strlen(s) - 1, i = 0;

	while (len > i)
	{
		swap_char(s + i, s + len);
		i++;
		len--;
	}
}
