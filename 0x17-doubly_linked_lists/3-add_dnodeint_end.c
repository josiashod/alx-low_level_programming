#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning
 * of a dlistint_t list.
 * @head: the head of the list
 * @n: the value of the head
 *
 * Return: the pointer to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *list;

	list = *head;
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (new);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (list->next)
			list = list->next;
		new->prev = list;
		list->next = new;
	}

	return (*head);
}
