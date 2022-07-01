#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hash table
 * @size: the size of the hash table
 *
 * Return: a pointer on Success, NULL if fail
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh_table;
	unsigned long int i;

	sh_table = malloc(sizeof(shash_table_t));
	if (!sh_table)
		return (NULL);

	sh_table->size = size;
	sh_table->shead = NULL;
	sh_table->stail = NULL;
	sh_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!sh_table->array)
	{
		free(sh_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		sh_table->array[i] = NULL;
	return (sh_table);
}


/**
 * shash_table_set - add/update value in the sorted hash table
 * @ht: the sorted hash table
 * @key: the key of the value
 * @value: the value associated to the key
 *
 * Return: 1 on success, 0 if fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int h_key;
	shash_node_t *sh_node, *tmp;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	h_key = key_index((unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp) /* handle key value update  */
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->snext;
	}

	sh_node = malloc(sizeof(shash_node_t));
	if (!sh_node)
		return (0);

	sh_node->key = strdup(key);
	sh_node->value = strdup(value);
	sh_node->next = ht->array[h_key];
	ht->array[h_key] = sh_node;

	if (!ht->shead)
	{
		sh_node->sprev = NULL;
		sh_node->snext = NULL;
		ht->shead = sh_node;
		ht->stail = sh_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		sh_node->snext = ht->shead;
		sh_node->sprev = NULL;
		ht->shead->sprev = sh_node;
		ht->shead = sh_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		sh_node->sprev = tmp;
		sh_node->snext = tmp->snext;
		if (!tmp->snext) /* if we're at the tail of the sh_table */
			ht->stail = sh_node;
		else
			tmp->snext->sprev = sh_node;
		tmp->snext = sh_node;
	}
	return (1);
}

/**
 * shash_table_get - retrieve a value associated with a key.
 * @ht: the sorted hash table
 * @key: the key associated to the value
 *
 * Return: the founded value on success, NULL if key
 * couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *sh_node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	sh_node = ht->shead;
	while (sh_node && strcmp(sh_node->key, key))
		sh_node = sh_node->snext;

	return ((sh_node) ? sh_node->value : NULL);
}

/**
 * shash_table_print - print a sorted hash table.
 * @ht: the sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *sh_node;

	if (!ht)
		return;

	sh_node = ht->shead;
	printf("{");
	while (sh_node)
	{
		printf("'%s': '%s'", sh_node->key, sh_node->value);
		if (sh_node->snext)
			printf(", ");
		sh_node = sh_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a sorted hash table in reverse order.
 * @ht: the sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *sh_node;

	if (!ht)
		return;

	sh_node = ht->stail;
	printf("{");
	while (sh_node)
	{
		printf("'%s': '%s'", sh_node->key, sh_node->value);
		if (sh_node->sprev)
			printf(", ");
		sh_node = sh_node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete a sorted hash table.
 * @ht: the sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *sh_node, *tmp;

	sh_node = ht->shead;
	while (sh_node)
	{
		tmp = sh_node;
		sh_node = sh_node->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
