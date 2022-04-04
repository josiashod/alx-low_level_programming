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

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strdup - allocate space in memory,
 * which contains a copy of the string
 * given as a parameter.
 *
 * @str: the string that should be copied.
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i = 0;

	if (!str)
		return (str);

	new_str = malloc(sizeof(str) * _strlen(str));

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}

	return (new_str);
}
