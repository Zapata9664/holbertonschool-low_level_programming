#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * main - adds numbers
 * @argc: size of argv
 * @argv: program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y int add = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != 0; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Error\n");
				return (0);
			}
		}
		add += atoi(argv[x]);
	}
	printf("%i\n", add);
	return (0);
}
