#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node of a listint_t
 * linked list.
 * @index: is the index of the node, starting at 0
 * @head: the head of the list
 *
 * Return: NULL if node does not exit and the node if
 * it exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
