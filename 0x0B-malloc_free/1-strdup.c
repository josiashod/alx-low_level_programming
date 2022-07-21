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
		i++;

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

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(char) * (_strlen(str) + 1));

	if (new_str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}
