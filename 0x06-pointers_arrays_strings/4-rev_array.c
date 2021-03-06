#include <stdio.h>

#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: elements
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
