#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: the head of the list
 *
 * Returns: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !(*head))
		return (NULL);

	if (!(*head)->next)
		return (*head);

	previous = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
