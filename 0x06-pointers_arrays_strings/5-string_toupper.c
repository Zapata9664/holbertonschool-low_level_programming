#include <stdio.h>

#include "main.h"

/**
 * string_toupper - invierte
 * @string: array
 *
 * Return: 0
 */

char *string_toupper(char *string)
{
	int a = 0;

	while (string[a] != '\0')
	{
		if (string[a] >= 'a' && string[a] <= 'z')
		{
			string[a] = string[a] - 32;
		}
		a++;
	}
	return (string);
}
