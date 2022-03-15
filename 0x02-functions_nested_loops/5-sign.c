#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number whose sign must be print
 *
 * Return: 1 and print + if n > 0
 * 0 and print 0 if n is equal to 0
 * -1 and print - if n < 0
 */
int print_sign(int n)
{
	int _return = 0;

	if (n > 0)
	{
		_putchar('+');
		_return = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		_return = -1;
	}
	else
		_putchar(0);

	return (_return);
}
