#include <stdio.h>
/**
 * add - add integers
 * @a: int 1
 * @b: int 2
 * Return: sum
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract integers
 * @a: int 1
 * @b: int 2
 * Return: difference of two numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two integers
 * @a: int 1
 * @b: int 2
 * Return: product
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide twon integers
 * @a: int 1
 * @b: int 2
 * Return: result of div
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - modulus of integers
 * @a: int 1
 * @b: int 2
 * Return: modulus
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
