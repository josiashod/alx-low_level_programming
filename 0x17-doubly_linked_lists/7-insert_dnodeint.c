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
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;

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

	return (NULL);
}
