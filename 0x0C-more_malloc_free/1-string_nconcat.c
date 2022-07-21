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
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to use
 *
 * Return: NULL if fails and the pointer
 * to the new string if not
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len;
	unsigned int i = 0, j = 0;
	char *new_str;

	if (!s1)
	{
		s1 = "";
		len = 0;
	}
	else
		len = _strlen(s1);
	if (!s2)
		s2 = "";

	new_str = malloc(sizeof(char) * (len + n + 1));

	if (new_str == NULL)
		return (NULL);
	while (s1[i])
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] && i < n)
	{
		new_str[j] = s2[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
