#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet 10 times lowercase
 * Description: Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i <= 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
