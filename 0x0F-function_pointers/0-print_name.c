#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name.
 * @name: the name.
 * @f: pointer to the function to use
 * to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
