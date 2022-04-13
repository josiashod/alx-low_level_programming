#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: the array.
 * @size: the array size.
 * @action: pointer to the function we need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
	}
}
