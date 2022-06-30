#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table where the key/value should be add or update
 * @key: the key of the value
 * @value: the value associated to the key
 *
 * Return: 1 on success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_key;
	hash_node_t *h_node;

	if (key[0] == '\0')
		return (0);

	hash_key = key_index((unsigned char *)key, ht->size);
	if (!ht->array[hash_key])/* if the index is NULL add new value*/
	{
		h_node = malloc(sizeof(hash_node_t));
		if (h_node == NULL)/* check allocation failed */
			return (0);

		h_node->key = strdup(key);
		h_node->value = strdup(value);
		h_node->next = NULL;

		ht->array[hash_key] = h_node;
	}
	else /* update linked list at the index */
	{
		h_node = ht->array[hash_key];
		/* going to the last element of the list */
		while (h_node->next && strcmp(h_node->key, key) != 0)
			h_node = h_node->next;

		if (!strcmp(h_node->key, key))/* if key exist in list update it */
			h_node->value = strdup(value);
		else /* otherwise add it to the list */
		{
			h_node->next = malloc(sizeof(hash_node_t));
			if (h_node->next == NULL) /* check allocation failed */
				return (0);

			h_node->next->key = strdup(key);
			h_node->next->value = strdup(value);
			h_node->next->next = NULL;
		}
	}
	return (1); /* program ran without any error */
}
