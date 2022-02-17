#include <stdio.h>

#include "main.h"

/**
 * print_most_numbers - print number
 *
 * Return always 0.
 */

void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
		{
			_putchar(number);
		}
	}
	_putchar(10);
}
