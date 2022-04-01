#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: buffer
 * @b: bytes
 * @n: number of bytes
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
