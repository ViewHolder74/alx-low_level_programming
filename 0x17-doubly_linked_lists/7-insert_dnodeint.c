#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: pointer to the first node
 * @idx: index of the node
 * @n: data
 * Return: the address or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (*h != NULL && count < idx - 1)
	{
		*h = (*h)->next;
		count++;
	}

	if (*h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = *h;
	new_node->next = (*h)->next;
	if ((*h)->next != NULL)
		(*h)->next->prev = new_node;
	(*h)->next = new_node;
	return (new_node);
}
