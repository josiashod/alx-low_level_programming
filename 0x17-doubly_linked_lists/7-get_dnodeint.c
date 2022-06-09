#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a dlistint_t
 * linked list.
 * @index: is the index of the node, starting at 0
 * @head: the head of the list
 *
 * Return: NULL if node does not exit and the node if
 * it exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
