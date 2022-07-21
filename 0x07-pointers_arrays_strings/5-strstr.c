#include "main.h"

/**
 * _strstr - that locates a substring.
 * @haystack: the source
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning
 * of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		do {
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		} while (needle[i] == haystack[i]);
		haystack++;
	}

	return (NULL);
}
