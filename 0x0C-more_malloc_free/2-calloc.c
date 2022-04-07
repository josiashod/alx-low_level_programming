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
	char *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmem * size); i++)
		ptr[i] = 0;
	return (ptr);
}
