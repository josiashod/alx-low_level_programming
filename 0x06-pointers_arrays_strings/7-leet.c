#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @str: the string to encode
 *
 * Return: the encoded string.
 */
char *leet(char *str)
{
	char key1337[5] = {'A', 'E', 'O', 'T', 'L'};
	int value1337[5] = {4, 3, 0, 7, 1};
	int i = 0, j;

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (key1337[j] == str[i] || key1337[j] == str[i] - 32)
				str[i] = value1337[j] + '0';
		}
		i++;
	}

	return (str);
}
