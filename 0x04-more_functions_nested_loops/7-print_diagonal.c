#include <stdio.h>
#include "main.h"

/*
 * print_diagonal - print diagonal
 *
 * return: number
 */
void print_diagonal(int n)
{
	int a, b;
	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
		{
			_putchar(10);
		}
}

