#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that create array of characters
 * and initialize it with specific character
 * @size: array size
 * @c: character array
 * Return: pointer to to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ch;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(char) * size);

	if (ch == NULL)
		return (NULL);
	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	return (ch);

}
