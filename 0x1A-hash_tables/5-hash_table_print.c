#include "hash_tables.h"

/**
 * hash_table_print - print the hash table.
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *h_node;
	unsigned long int i;
	int can_print_comma = 0;

	for (i = 0; i < ht->size; i++)
	{
		if (i == 0)
			printf("{");

		if (ht->array[i])
		{
			if (can_print_comma)
				printf(", ");

			h_node = ht->array[i];
			while (h_node)
			{
				printf("'%s': '%s'", h_node->key, h_node->value);
				if (h_node->next)
					printf(", ");
				h_node = h_node->next;
				can_print_comma = 1;
			}
		}
		if ((i + 1) == ht->size)
			printf("}\n");
	}
}
