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
	int i, j;

	for (i = 48; dest[i] != 0; i++)
	{
		for (j = 48; src[j] != 0; j++)
		{
			dest[i+j] = src[j];
			dest[i+j] = 0;
		}
	}
	return (dest);
}

