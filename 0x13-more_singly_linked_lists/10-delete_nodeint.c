#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @index: is the index of the node, starting at 0
 * @head: the head of the list
 *
 * Return: NULL if node does not exit and the node if
 * it exist.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cp_list, *tmp;

	cp_list = *head;
	while (cp_list)
	{
		if (index == 0 && i == 0)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}

		if (index == (i + 1))
		{
			tmp = cp_list->next;
			cp_list->next = tmp->next;
			free(tmp);
			return (1);
		}
		cp_list = cp_list->next;
		i++;
	}

	return (-1);
}
