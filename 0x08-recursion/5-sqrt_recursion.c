#include "main.h"

/**
 * _sqrt - check for square
 * @n: test number
 * @x: squared number
 *
 * Return: the square or -1;
 */
int _sqrt(int n, int x)
{
	if ((n * n) > x)
		return (-1);
	if ((n * n) == x)
		return (n);

	return (_sqrt(n + 1, x));
}

/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: number whose natural square root should be find.
 *
 * Return: the natural square root or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(1, n));
}
