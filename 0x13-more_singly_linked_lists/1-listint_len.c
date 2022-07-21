#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the list to print
 *
 * Return: the number of element to print.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
