#include <math.h>
#include "main.h"

/**
 * is_prime - check if the number can be divide
 * another number
 * @n: the number to test
 * @start: the begining of the test
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}

/**
 * is_prime_number - tell if a number is prime
 * @n: the number to check
 *
 * Return: 1 if the input integer is a prime
 * number, otherwise return 0.
 *
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
