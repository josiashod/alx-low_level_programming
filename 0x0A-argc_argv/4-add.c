#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers.
 *
 * @argc: the number of arguments
 * @argv: array of arguments.
 *
 * Return: success (0) or fail (1).
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
		printf("0\n");

	return (0);
}
