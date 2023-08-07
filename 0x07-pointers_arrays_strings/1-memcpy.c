#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies number of byte to memory
 * @dest: pointer to destination of n byte copied
 * @src: pointer to source of n byte to be copied
 * @n: number of byte to be copied
 * Return: pointer to destination
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	return (dest);
}
