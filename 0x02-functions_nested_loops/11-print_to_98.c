#include<stdio.h>
#include"main.h"

/**
 *
 *
 *
 *
 */

void print_to_98(int n)
{
	while(n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{		
			n++;
		}
		else 
		{
			n--;
		}

	}
	printf("%d\n", 98);
}
