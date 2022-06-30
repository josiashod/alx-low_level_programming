#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key.
 * @ht: the hash table where the value is stored
 * @key: the key associated to the value
 *
 * Return: the founded value on success, NULL if key
 * couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_key;
	hash_node_t *h_node;

	hash_key = key_index((unsigned char *)key, ht->size);

	if (!ht->array[hash_key])/* check if index is not NULL */
		return (NULL);

	h_node = ht->array[hash_key];

	if (h_node->next)/* check if the list has another values */
	{
		/* search the node with the matching key */
		while (h_node && strcmp(h_node->key, key) != 0)
			h_node = h_node->next;
	}

	if (!h_node) /* nothing was found */
		return (NULL);

	/* check if the node key matches the needed key  */
	else if (strcmp(h_node->key, key) != 0)
		return (NULL);

	return (h_node->value);
}
