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
 * argstostr - concatenates all the arguments
 * of a program.
 * @ac: number of argument.
 * @av: array of argument.
 *
 * Return: the pointer to the string or null.
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i = 0, j, k = 0;
	char *new_str;

	if (ac <= 0 || !av)
		return (NULL);

	while (i < ac)
	{
		len += _strlen(av[i]);
		i++;
	}

	new_str = malloc(sizeof(char) * (len + ac));

	if (!new_str)
		return (new_str);
	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			new_str[k] = av[i][j];
			k++;
			j++;
		}
		new_str[k] = '\n';
		k++;
		i++;
	}
	return (new_str);
}
