#include "main.h"

/**
 * print_alphabet_x10 - function to  print the alphabet
 * it prints in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar(10);
	}
}
