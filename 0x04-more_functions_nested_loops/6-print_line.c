#include <stdio.h>

#include "main.h"

/*
 * print_line - straight
 * @n: variable
 * return 0
 */

void print_line(int n)
{
  int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar(10);
}
