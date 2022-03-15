#include "main.h"

/**
 * _islower - check if a character
 * is in lowercase
 *
 *@c: the character to check
 *
 * Return: On success 1.
 * On error 0.
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
		return (1);
	return (0);
}
