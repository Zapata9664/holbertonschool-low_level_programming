#include<stdio.h>
#include"main.h"

/**
 * print_last_digit - print las digit
 * @n: letter
 *
 * Return: number
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit = (n * -1) % 10;
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}

