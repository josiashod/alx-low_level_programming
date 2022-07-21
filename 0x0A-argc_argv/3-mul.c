#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: the number of arguments
 * @argv: array of arguments.
 *
 * Return: success (0) or fail (1).
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < 3; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
