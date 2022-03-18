#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum
 * @a: parameter
 * @b: parameter
 *
 * Return: 1
 */


int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -rest
 * @a: parameter
 * @b: parameter
 *
 * Return: 1
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 * @a: parameter
 * @b: parameter
 *
 * Return: 1
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: parameter
 * @b: parameter
 *
 * Return: 1
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: parameter
 * @b: parameter
 *
 * Return: 1
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

