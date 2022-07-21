#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: the number of paramaters passed
 * Return: 0 or the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (n);

	va_start(params, n);
	for (i = 0; i < n; i++)
		sum += va_arg(params, int);

	va_end(params);
	return (sum);
}
