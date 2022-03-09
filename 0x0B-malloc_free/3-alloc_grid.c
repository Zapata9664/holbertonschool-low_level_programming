#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_ grid - return a pointer to a 2 dimesional array
 * @width: size
 * @height: size
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int a, b, **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * height);

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(sizeof(int) * width);
		if (p[a] == NULL)
		{
			for (a -= 1; a >= 0; a--)
			{
				free(p[a]);
			}
			free(p);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			p[a][b] = 0;
		}
	}
	return (p);
}
