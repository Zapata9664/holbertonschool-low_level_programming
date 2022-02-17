#include <stdio.h>

#include "main.h"

/**
 * print_numbers - print alphabet
 *
 * Return always 0.
 */

void print_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar(10);
}
