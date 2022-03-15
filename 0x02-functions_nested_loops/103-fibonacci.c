#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2 followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int u0 = 0, u1 = 1, u, sum = 0;

	for (i = 0; (i < 50 && u < 4000000); i++)
	{
		u = u0 + u1;

		if (u % 2 == 0)
			sum += u;

		u0 = u1;
		u1 = u;
	}

	return (0);
}
