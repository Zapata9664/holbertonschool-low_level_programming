#include <stdio.h>

#include "main.h"

/**
 * _isdigit - print number
 * @c: character
 *
 * Return: number
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
