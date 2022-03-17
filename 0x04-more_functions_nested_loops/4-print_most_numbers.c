#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
		if (n != 51 || n != 53)
			_putchar(n);

	_putchar("\n");
}
