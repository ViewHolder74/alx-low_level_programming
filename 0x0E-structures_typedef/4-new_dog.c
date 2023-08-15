#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: pointer to dog name
 * @age: age
 * @owner: pointer to dogs owner
 *
 * Return: NULL if the function fails
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i = 0, j = 0, p_name, p_owner;

	p_dog = malloc(sizeof(*p_dog));

	if (p_dog == NULL)
		return (NULL);

	for (p_name = 0; name[p_name]; p_name++)
		;
	p_dog->name = malloc(p_name + 1);
	for (p_owner = 0; owner[p_owner]; ++p_owner)
		;
	p_dog->owner = malloc(p_owner + 1);
	if (!(p_dog->owner) || !(p_dog->name))
	{
		free(p_dog->owner);
		free(p_dog->name);
		return (NULL);
	}

	while (i < p_name)
	{
		p_dog->name[i] = name[i];
		i++;
	}
	p_dog->name[i] = '\0';
	p_dog->age = age;

	while (j < p_owner)
	{
		p_dog->owner[j] = owner[j];
		j++;
	}
	p_dog->owner[j] = '\0';
	free(p_dog);
	return (p_dog);
}



