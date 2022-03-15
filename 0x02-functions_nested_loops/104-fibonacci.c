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
	unsigned long u0 = 0, u1 = 1, u, u_h1, u_h2;
	unsigned long u0_h1, u1_h1, u0_h2, u1_h2;

	for (i = 0; i < 92; i++)
	{
		u = u0 + u1;
		u0 = u1;
		u1 = u;
		printf("%lu, ", u);
	}

	u0_h1 = u0 / 10000000000;
	u1_h1 = u0 / 10000000000;
	u0_h2 = u0 % 10000000000;
	u1_h2 = u0 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		u_h1 = u0_h1 + u1_h1;
		u_h2 = u0_h2 + u1_h2;

		if (u_h2 > 9999999999)
		{
			u_h1++;
			u_h2 %= 10000000000;
		}

		u0_h1 = u1_h1;
		u0_h2 = u1_h2;
		u1_h1 = u_h1;
		u1_h2 = u_h2;

		printf("%lu%lu", u_h1, u_h2);
		if (i < 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
