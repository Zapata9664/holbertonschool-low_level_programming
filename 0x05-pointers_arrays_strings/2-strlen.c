#include <stdio.h>
#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: ponter
 *
 * Return: number
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
