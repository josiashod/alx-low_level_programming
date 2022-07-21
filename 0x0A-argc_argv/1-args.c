#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the number or arguents
 * that has been passed.
 *
 * @argc: the number of arguments
 * @argv: array of arguments.
 *
 * Return: Always success (0).
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
