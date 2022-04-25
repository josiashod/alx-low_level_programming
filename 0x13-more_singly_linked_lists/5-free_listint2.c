#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the head list to frees
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!(*head))
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
