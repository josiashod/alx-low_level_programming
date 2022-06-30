#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer on Success, NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;

	return (h_table);
}
