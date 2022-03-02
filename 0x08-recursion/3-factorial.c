#include <stdio.h>
#include "main.h"

/**
 * factorial - fac of a number
 * @n: entero
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
