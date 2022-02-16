#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - chek the code
 *
 *Return:
 */

void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar(10);
	}
}
