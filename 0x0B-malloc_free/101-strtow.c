#include "main.h"
#include <stdio.h>

/**
 * arr_size - determine the lentgh
 * of the array
 * @str: the given string of strtow
 *
 * Return: array size
 */
int arr_size(char *str)
{
	int i = 0, size = 0;

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ' && str[i])
		{
			size++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	return (size);
}

/**
 * string_size - calculate the size of
 * the line containing string.
 * @str: the pointer where the string start
 *
 * Return: a integer representing the size
 * of the line
 */
int string_size(char *str)
{
	int i = 0;

	while (str[i] && str[i] != ' ')
		i++;
	return (i);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split.
 *
 * Return: a pointer to an array of
 * strings (words) or NULL
 */
char **strtow(char *str)
{
	char **new_str;
	int size = 0, line_size, i = 0, j = 0, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	size = arr_size(str);
	new_str = (char **) malloc(sizeof(char *) * (size + 1));

	if (!new_str)
		return (new_str);
	while (i < size)
	{
		while (str[j] && str[j] == ' ')
			j++;
		line_size = string_size(str + j);
		new_str[i] = (char *) malloc(sizeof(char) * (line_size + 1));
		if (!new_str[i])
		{
			while (i >= 0)
			{
				free(new_str[i]);
				i--;
			}
			return (NULL);
		}
		else
		{
			k = 0;
			while (str[j] && str[j] != ' ')
			{
				new_str[i][k] = str[j];
				k++;
				j++;
			}
			new_str[i][k] = '\0';
		}
		i++;
	}
	new_str[i] = NULL;
	return (new_str);
}
