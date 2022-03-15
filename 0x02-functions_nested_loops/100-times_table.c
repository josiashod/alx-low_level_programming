#include "main.h"

/**
 * print_times_table - prints the n times table
 * starting with 0.
 *
 *@n: the number to stop
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, results;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				results = j * i;
				if (results <= 99)
					_putchar(' ');
				if (results <= 9)
					_putchar(' ');

				if (results >= 100)
				{
					_putchar((results / 100) + '0');
					_putchar((results / 10) % 10 + '0');
				}
				else if (results <= 99 && results >= 10)
				{
					_putchar((results / 10) + '0');
				}

				_putchar((n % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
