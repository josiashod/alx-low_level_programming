#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: maximum
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; (min + i) <= max; i++)
		arr[i] = min + i;
	return (arr);
}
