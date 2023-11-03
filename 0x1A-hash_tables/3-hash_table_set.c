#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_set - Add element to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *tmp;
	unsigned long int count, index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	tmp = strdup(value);
	if (tmp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	count = index;
	while (ht->array[count])
	{
		if (strcmp(ht->array[count]->key, key) == 0)
		{
			free(ht->array[count]->value);
			ht->array[count]->value = tmp;
			return (1);
		}
		count++;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(tmp);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = tmp;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
