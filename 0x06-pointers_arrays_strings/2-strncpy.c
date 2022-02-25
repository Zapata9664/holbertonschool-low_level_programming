#include <stdio.h>

#include "main.h"

/**
 * _strncpy - copy
 * @src: string one
 * @dest: string two
 * @n: variable
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	a = a;
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
