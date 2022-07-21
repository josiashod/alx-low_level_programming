#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal.
 * @n: the line length
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; (i < n && n > 0); i++)
	{
		for (j = 0; j < i; j++)
			_putchar(32);
		_putchar(92);
		_putchar(10);
	}

	if (n <= 0)
		_putchar(10);
}
