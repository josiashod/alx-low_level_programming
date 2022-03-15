#include "main.h"

/**
 * _isalpha - check if a character is a letter
 *  and is in lowercase or uppercase
 *
 *@c: the character to check
 *
 * Return: On success 1.
 * On error 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
