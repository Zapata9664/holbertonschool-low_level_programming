#include <stdio.h>

#include "main.h"

/**
 * main - print name
 * @argc: size of argv
 * @argv: program
 *
 * Return: always 0
 */

int main(int argc, char *argv)
{
	(void)argc;
	{
		printf("%S,\n" * argv);
	}
	return (0);
}
