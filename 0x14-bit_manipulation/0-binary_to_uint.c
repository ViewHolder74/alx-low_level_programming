#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there
 * is one or more chars in the string b that is not 0
 * or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n <<= 1;
		n += (*b - '0');
	}
	return (n);
}
