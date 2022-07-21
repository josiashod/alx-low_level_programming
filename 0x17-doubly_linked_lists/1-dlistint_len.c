#include "lists.h"

/**
 * dlistint_len - function that return the number
 * of elements in a linked dlistint_t list.
 *
 * @h: linked dlistint_t list
 *
 * Return: he number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t _len = 0;

	while (h)
	{
		_len += 1;
		h = h->next;
	}

	return (_len);
}
