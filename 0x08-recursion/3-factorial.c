#include "main.h"

/**
 * factorial - the factorial of a given number.
 * @n: number whose factorial should be returned
 *
 * Return: the factorial of the number or -1 if
 * the number is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
