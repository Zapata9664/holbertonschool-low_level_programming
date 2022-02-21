#include <stdio.h>

#include "main.h"

/**
 * _strlen - longitud de una cadena
 * @s: lenght
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int longitud = 0;

	while (s[longitud] != '\0')
		longitud++;
	return (longitud);
}
