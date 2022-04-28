#include "main.h"

/**
 * check_binary - check if the binary string
 * is correct and is len.
 * @b: the binary string
 *
 * Return: 0 if fails or the len if not.
 */
int check_binary(const char *b)
{
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the string to convert
 *
 * Return: 0 if fails and the number if not
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len = check_binary(b), base = 1;

	if (!len)
		return (len);

	while (len)
	{
		decimal += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}

	return (decimal);
}
