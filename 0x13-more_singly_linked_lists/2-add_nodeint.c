#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list
 * @head: head node
 * @n: data
 * Return: The address of the new elements
 * or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);

}
