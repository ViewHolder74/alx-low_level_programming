#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print number for 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}