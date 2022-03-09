#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - creates an array
 * @grid: size
 * @height: print
 *
 * Return: pointer
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
