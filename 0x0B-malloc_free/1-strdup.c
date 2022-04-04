#include "main.h"

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
	int i = 0;

	if (!str)
		return (str);

	new_str = malloc(sizeof(str));

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}

	return (new_str);
}
