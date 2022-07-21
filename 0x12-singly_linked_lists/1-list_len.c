#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the list to print
 *
 * Return: the number of element to print.
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
