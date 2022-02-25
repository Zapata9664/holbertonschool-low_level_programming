#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatena
 * @src: string one
 * @dest: string two
 * @n: variable
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != 0)
	{
		a++;
	}
	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
