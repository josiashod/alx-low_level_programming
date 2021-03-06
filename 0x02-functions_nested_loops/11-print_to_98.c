#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * from n to 98, followed by a new line.
 *
 * @n: number to start printing from
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int breakpoint = 98;

	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}

	printf("%d\n", breakpoint);
}
