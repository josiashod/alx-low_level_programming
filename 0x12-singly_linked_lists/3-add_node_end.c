#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s: string whose length should be return
 *
 * Return: (int) the length of the string.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node_end - adds a new node at the beginning
 * of a list_t list.
 * @head: the head of the list
 * @str: the value of the head
 *
 * Return: the pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *list;

	list = *head;
	new = malloc(sizeof(list_t));

	if (!new)
		return (new);

	new->str = strdup(str);
	new->len = _strlen(str);
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
