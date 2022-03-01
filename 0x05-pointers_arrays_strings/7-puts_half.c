#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half of a string
 * @str: cadena
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int n = 0;
	int i;

	while (str[n] != 0)
	{
		n++;
	}

	if (n % 2 == 0)
	{
		for (i = n / 2; i < n; i++)
		{
			_putchar(str[i]);
		}
	}

	else 
	{
		for (i = (n / 2) + 1; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}

