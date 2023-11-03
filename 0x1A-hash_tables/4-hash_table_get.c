#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - Retrieves value associated with key
 * @ht: hash table
 * @key: the key to the requested value
 *
 * Return: value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (new_node = ht->array[index]; new_node != NULL; new_node = new_node->next)
	{
		if (strcmp(new_node->key, key) == 0)
			return (new_node->value);
	}

	return (NULL);
}
