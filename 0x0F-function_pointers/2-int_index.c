#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer.
 * @array: the array where to perform
 * the search
 * @size: the array size
 * @cmp:  pointer to the function
 * to be used to compare values
 *
 * Return: the index of the element
 * if it was find or -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
