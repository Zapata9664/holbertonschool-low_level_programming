#include "main.h"
#include<stdlib.h>

/**
 * string_nconcat - concatenar
 * @n: number of bytes
 * @s1: number of bytes
 * @s2: number of bytes
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, k = 0;
	unsigned int j, l, a = 0;
	char *ptr;

	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		j++;
	}
	ptr = malloc(j + i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[k] != 0)
	{
		ptr[k] = s1[k];
		k++;
	}
		if (n >= j)
		{
		while (a < j)
		{
			ptr[k] = s2[a];
			a++;
		}
		}
		else
		{
		while (l < n)
		{
			ptr[k] = s2[l];
			l++;
			k++;
		}
		}
		return (ptr);
	}
