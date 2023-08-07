#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds a character in string
 * @s: string to perform character search
 * @c: characterto find
 * Return: pointer to the first occurence of
 * character in string or NULL if not found
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		++s;
		++i;
	}
	return (s);
}
