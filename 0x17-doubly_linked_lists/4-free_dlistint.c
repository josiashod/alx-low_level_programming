#include "lists.h"

/**
 * free_dlistint - frees a listint_t list.
 * @head: the head list to frees
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
