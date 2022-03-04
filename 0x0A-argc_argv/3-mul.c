#include <stdio.h>
#include "main.h"
#include<stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: size
 * @argv: program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
