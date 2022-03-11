#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, j, k;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				for (k = '0'; k <= '9'; k++)
				{
					n = putchar(n);
					i = putchar(i);
					putchar(' ');
					j = putchar(j);
					k = putchar(k);
					if (n != '9' || k != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
