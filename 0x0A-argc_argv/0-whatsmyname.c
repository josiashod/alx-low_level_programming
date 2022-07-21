#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the name of the file
 * that has been executed
 * @argc: the number of arguments
 * @argv: array of arguments.
 *
 * Return: Always success (0).
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
