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
 * _strncat - concatenates two strings.
 * @dest: destination.
 * @src: source
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
