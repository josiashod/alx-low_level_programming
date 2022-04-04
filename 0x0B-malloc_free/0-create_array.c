#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array
 * @c: the default char
 *
 * Return:  a pointer to the array,
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	string = malloc(sizeof(char) * size);

	if (!string)
		return (string);
	for (i = 0; i < size; i++)
		string[i] = c;

	return (string);
}
