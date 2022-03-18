#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 1
 */

int main(int argc, char **argv)
{
	int a, b;
	char *op;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	result = (get_op_func(op))(a, b);
	printf("%d\n", result);

	return (0);
}
