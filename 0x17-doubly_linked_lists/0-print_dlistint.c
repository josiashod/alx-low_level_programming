#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all
 * the elements of a dlistint_t list.
 *
 * @h: the list to print
 *
 * Return: he number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t _len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		_len += 1;
		h = h->next;
	}

	return (_len);
}
