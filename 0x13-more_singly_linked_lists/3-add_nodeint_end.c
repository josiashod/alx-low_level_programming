#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning
 * of a listint_t list.
 * @head: the head of the list
 * @n: the value of the head
 *
 * Return: the pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *list;

	list = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
		return (new);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (list->next)
			list = list->next;
		list->next = new;
	}

	return (*head);
}
