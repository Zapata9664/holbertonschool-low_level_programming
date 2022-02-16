#include<stdio.h>
#include"main.h"

/**
 * times_table - print tables
 *
 * Return: 0
*/

void times_table(void)
{
	int a,b,c, modul, dec;
	for (a = 0 ; a <= 9; a++)
	{
		for (b = 0 ; b <= 9; b++)
		{	

			c = a * b;
		if (b != 0)
		{
		_putchar(',');
		_putchar(' ');
		}
		if (c < 10 && b != 0)
		{
			_putchar(' ');
			_putchar('0' + c);

		}
		else if (c >= 10)
		{
			modul = c % 10;

			dec = (c - modul) / 10;

			_putchar('0' + dec);
			_putchar('0'+ modul);
		}
		else 
		{
			_putchar('0');
		}
		}
		_putchar(10);
	}

}
