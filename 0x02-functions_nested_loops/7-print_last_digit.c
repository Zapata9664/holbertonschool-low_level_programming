#include<stdio.h>
#include"main.h"

/**
 *
 *
 *
 */

int print_last_digit(int n)
{
	int lastDigit;
	if (n < 0)
	{
		lastDigit = (n * -1) % 10;
		return (lastDigit);
	}	
	
	lastDigit = n % 10;
	return (lastDigit);
}

