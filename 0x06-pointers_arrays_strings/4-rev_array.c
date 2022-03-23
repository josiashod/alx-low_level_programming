#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the pointer to the first number
 * @b: the pointer to the second number
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	n--;
	while (n > i)
	{
		swap_int(a + i, a + n);
		n--;
		i++;
	}
}
