#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the line length
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; (i < n && n > 0); i++)
	{
		_putchar(95);
	}

	_putchar(10);
}
