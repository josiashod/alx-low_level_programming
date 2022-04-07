#include "main.h"

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: size of the array
 * @size: number of bytes
 *
 * Return: pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	return (ptr);
}
