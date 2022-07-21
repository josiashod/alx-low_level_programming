#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string whose length should be return
 *
 * Return: (int) the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}

	return (i);
}


/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Null or the pointer to the string.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len = 0, i = 0, j = 0;
	char *new_str;

	if (s1)
		len += _strlen(s1);
	if (s2)
		len += _strlen(s2);

	new_str = malloc(sizeof(char) * (len + 1));

	if (!new_str)
		return (new_str);
	if (s1)
	{
		while (s1[i])
		{
			new_str[j] = s1[i];
			j++;
			i++;
		}
	}

	i = 0;

	if (s2)
	{
		while (s2[i])
		{
			new_str[j] = s2[i];
			j++;
			i++;
		}
	}
	return (new_str);
}
