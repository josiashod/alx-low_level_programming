#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 *@c: the character to check
 *
 * Return: On success 1.
 * On error 0.
 */
int _isdigit(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
