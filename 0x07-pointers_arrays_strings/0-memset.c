#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with constant byte
 * @s: pointer to memory
 * @b: value to fill in the memory
 * @n: number of byte to set
 * Return: a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
