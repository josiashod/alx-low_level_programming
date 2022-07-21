#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long largest = 0, number = 612852475143, div = 2;

	while (number != 0)
	{
		if (number % div != 0)
		{
			div++;
		}
		else
		{
			largest = number;
			number = number / div;
			if (number == 1)
			{
				printf("%ld\n", largest);
				break;
			}
		}
	}

	return (0);
}
