#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: the number of arguments
 * @argv: array of arguments.
 *
 * Return: Always success (0).
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");

	return (0);
}
