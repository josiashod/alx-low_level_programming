#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert.
 *
 * Return: the converted int.
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int signe = 1;

	do
	{
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' or *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * i);
}
