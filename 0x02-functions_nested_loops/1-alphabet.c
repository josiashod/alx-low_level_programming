#include "main.h"

/**
 * print_alphabet - function to  print the alphabet
 * it prints in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar(10);
}
