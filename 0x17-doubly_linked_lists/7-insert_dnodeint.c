#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - find the nth node of a dlistint_t
 * linked list.
 * @idx: is the index of the node, starting at 0
 * @head: the head of the list
 * @n: value of the node
 *
 * Return: NULL if node does not exit and the node if
 * it exist.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
unsigned int idx, int n)
{
	dlistint_t *prev, *new, *dlist = *head;
	unsigned int i = 0;

	while (dlist)
	{
		if (idx == i)
		{
			if (i == 0)
				return (add_dnodeint(head, n));

			new = malloc(sizeof(dlistint_t));
			new->n = n;
			if (!new)
				return (NULL);

			new->next = prev->next;
			new->prev = prev;
			if (prev->next)
				prev->next->prev = new;
			prev->next = new;
			return (new);
		}
		else if (idx == (i + 1))
			prev = dlist;

		dlist = dlist->next;
		i++;
	}
	if (!dlist && i == idx)
		return (add_dnodeint_end(head, n));

	return (NULL);
}
