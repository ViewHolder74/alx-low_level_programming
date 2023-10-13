#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list
 * @head: pouinter to first node
 * @index: index of the node
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(*head);
		return (1);
	}

	while (*head != NULL && count < index)
	{
		*head = (*head)->next;
		count++;
	}

	if (*head == NULL)
		return (-1);
	tmp = (*head)->prev;
	tmp->next = (*head)->next;

	if ((*head)->next != NULL)
		(*head)->next->prev = tmp;
	free(*head);
	return (1);
}
