#include"main.h"
#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return always 0.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar(10);
}
