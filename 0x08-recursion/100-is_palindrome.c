#include "main.h"
#include <string.h>

/**
 * is_equal - check if the caractere at
 * two differents position of a string
 * are equals.
 *
 * @start: the first index
 * @end: the second index
 * @s: the string where the caractere is check.
 *
 * Return: 1 if is equal and 0 if not.
 */
int is_equal(int start, int end, char *s)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_equal(start + 1, end - 1, s));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);

	return (is_equal(0, len - 1, s));
}
