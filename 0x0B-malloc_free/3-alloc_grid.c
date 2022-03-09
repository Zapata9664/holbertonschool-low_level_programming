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
	int a, b, **set;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	set = malloc(sizeof(int) * height);

	if (set == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		set[a] = malloc(sizeof(int) * width);
		if (set[a] == NULL)
		{
			for (a -= 1; a >= 0; a--)
			{
				free(set[a]);
			}
			free(set);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			set[a][b] = 0;
		}
	}
	return (set);
}
