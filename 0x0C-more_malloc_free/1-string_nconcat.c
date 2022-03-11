#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - save memory
 * @n: number of bytes
 * @s1: number of bytes
 * @s2: number of bytes
 * return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int i = 0;
	unsigned int j = 0;
	int k = 0;
	unsigned int l = 0;
	unsigned int a = 0;
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
