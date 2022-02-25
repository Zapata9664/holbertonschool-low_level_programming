#include <stdio.h>

#include "main.h"

/**
 * _strcat - concatena
 * @src: string one
 * @dest: string two
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
