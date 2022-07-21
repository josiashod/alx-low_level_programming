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
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);

	do {
		dest[len] = *src;
		len++;
	} while (*src++);

	dest[len] = '\0';

	return (dest);
}
