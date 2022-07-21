#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the list to print
 *
 * Return: the number of element to print.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
