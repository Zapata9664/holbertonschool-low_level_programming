#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string
 *
 */

void puts2(char *str)
{
	int n = 0;
	int i;

	while (str[n] != 0)
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
