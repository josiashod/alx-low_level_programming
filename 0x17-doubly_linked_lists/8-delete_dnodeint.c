#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list.
 * @index: is the index of the node, starting at 0
 * @head: the head of the list
 *
 * Return: NULL if node does not exit and the node if
 * it exist.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cp_list, *tmp;

	cp_list = *head;
	while (cp_list)
	{
		if (index == i && i == 0)
		{
			tmp = *head;
			if ((*head)->next)
			{
				*head = (*head)->next;
				(*head)->prev = NULL;
			}
			else
			{
				*head = NULL;
			}

			free(tmp);
			return (1);
		}

		if (index == (i + 1))
		{
			tmp = cp_list->next;
			cp_list->next = tmp->next;
			tmp->next->prev = cp_list;
			free(tmp);
			return (1);
		}
		cp_list = cp_list->next;
		i++;
	}

	return (-1);
}
