#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the pointer to the address of the head list
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	/* getting the next element of the list */
	new_head = (*head)->next;
	/* store the vale of the head node */
	n = (*head)->n;
	/* free the head */
	free(*head);
	/* change the head value  */
	*head = new_head;
	return (n);
}
