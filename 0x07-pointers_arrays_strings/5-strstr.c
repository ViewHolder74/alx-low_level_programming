#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to string to look for 
 * substring (source)
 * @needle: pointer to string to find
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *n, *h;

	while (*haystack)
	{
		n = needle;
		h = haystack;
		while (*n && (*h == *n))
		{
			n++;
			h++;
		}

		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
