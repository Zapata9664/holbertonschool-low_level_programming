#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - arrays of chars
 * @size: size
 * @c: print
 *
 *Return: c
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		p = (char *)malloc(size * sizeof(char));
		if (p != NULL)
		{
			for (a = 0; a < size; a++)
			{
				p[a] = c;
				a++;
			}
		}
	}
	return(p);
}
