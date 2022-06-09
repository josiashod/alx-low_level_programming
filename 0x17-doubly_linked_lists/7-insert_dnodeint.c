#include "lists.h"

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
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *prev, *new;
	unsigned int i = 0;

	while (head)
	{
		if (idx == i)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;

			if (i == 0)
			{
				new->n = n;
				new->next = *head;
				new->prev = NULL;
				(*head)->prev = new;
				*head = new;
				return (new);
			}
			new->next = prev->next;
			new->prev = prev;
			prev->next->prev = new;
			prev->next = new;
			return (new);
		}
		else if (idx == (i + 1))
			prev = *head;

		head = &(*head)->next;
		i++;
	}

	return (NULL);
}
