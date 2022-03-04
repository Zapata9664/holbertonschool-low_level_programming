#include <stdio.h>

#include "main.h"

/**
 * main - print numbers
 * @argc: size of argv
 * @argv: program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
