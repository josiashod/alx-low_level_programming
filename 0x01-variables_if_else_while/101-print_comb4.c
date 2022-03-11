#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, j;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = (n + 1); i <= '9'; i++)
		{
			for (j = (i + 1); j <= '9'; j++)
			{
				n = putchar(n);
				i = putchar(i);
				j = putchar(j);
				if (n != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
