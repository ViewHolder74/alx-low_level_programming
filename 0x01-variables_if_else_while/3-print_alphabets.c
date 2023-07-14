#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char c;

	/* print alphabet in lowercase */
	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	/* Print alphabet in uppercase */
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
