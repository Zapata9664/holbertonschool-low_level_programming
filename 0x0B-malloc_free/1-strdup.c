#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * _strdup - retunr pointer
 * @str: string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *string;
	unsigned int a;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		;
	string = (char *)malloc(i + 1 * sizeof(char));
	if (string != NULL)
	{
		for (a = 0; str[a] != 0; a++)
			string[a] = str[a];
	}
	else
	{
		return (NULL);
	}
	string[a] = 0;
	return (string);
}
