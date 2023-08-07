#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that get a length of
 * prefix substring
 * @s: pointer to a string to examine
 * @accept: character to find in string
 * Return: number of byte in the initial segment
 * of string which only consist the byte to find
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_accepted = 1, i;

	while (*s && is_accepted)
	{
		is_accepted = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				is_accepted = 1;
				count++;
				break;
			}
		}
		s++;
	}
	return (count);
}

