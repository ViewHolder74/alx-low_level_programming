#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks if 0 through 9 is a digit
 * @c: digit
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
