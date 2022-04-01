#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print all arguments it receives.
 *
 * @argc: the number of arguments
 * @argv: array of arguments.
 *
 * Return: Always success (0).
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
