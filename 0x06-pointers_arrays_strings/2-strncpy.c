#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination.
 * @src: source.
 * @n: length to copy.
 *
 * Return: destionation pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
