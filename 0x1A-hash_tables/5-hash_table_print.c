#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 * Return: key/value pairs
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int count;
	int i = 0;

	if (ht == NULL)
		return;

	printf("{");

	count = 0;
	while (count < ht->size)
	{
		if (ht->array[count] != NULL)
		{
			new_node = ht->array[count];
			while (new_node != NULL)
			{
				if (i)
					printf(", ");

				printf("'%s': '%s'", new_node->key, new_node->value);
				i = 1;
				new_node = new_node->next;
			}
		}
		count++;
	}
	printf("}\n");
}
