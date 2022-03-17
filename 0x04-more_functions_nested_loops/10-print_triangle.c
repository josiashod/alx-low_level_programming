#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; (i < size && size > 0); i++)
	{
		for (j = 0; j < (size - (i + 1)); j++)
			_putchar(32);
		for (j = 0; j < (i + 1); j++)
			_putchar(35);
		_putchar(10);
	}

	if (size <= 0)
		_putchar(10);
}
