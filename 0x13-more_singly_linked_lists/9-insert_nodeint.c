#include "lists.h"

/**
 * insert_nodeint_at_index - find the nth node of a listint_t
 * linked list.
 * @idx: is the index of the node, starting at 0
 * @head: the head of the list
 * @n: value of the node
 *
 * Return: NULL if node does not exit and the node if
 * it exist.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list, *new;
	unsigned int i = 0;

	while (head)
	{
		if (idx == i)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (new);
			new->n = n;

			if (i == 0)
			{
				new->next = *head;
				*head = new;
				return (new);
			}
			new->next = list->next;
			list->next = new;
			return (new);
		}
		else if (idx == (i + 1))
			list = *head;

		head = &(*head)->next;
		i++;
	}

	return (NULL);
}
