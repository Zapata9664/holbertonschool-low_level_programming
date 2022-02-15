#include<stdio.h>
#include"main.h"

/**
 * main - print sign
 *
 * Return: 
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');		
		return (-1);
	}
	
	
		_putchar('0');		
	return (0);
}
