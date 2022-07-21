#include "main.h"

/**
 * _isupper - check if a character
 * is in upercase
 *
 *@c: the character to check
 *
 * Return: On success 1.
 * On error 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
