#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @n: the line length
 *
 * Return: void.
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; (i < n && n > 0); i++)
	{
		for (j = 0; j < n; j++)
			_putchar(35);
		_putchar(10);
	}

	if (n <= 0)
		_putchar(10);
}
