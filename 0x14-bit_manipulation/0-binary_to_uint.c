#include "main.h"

/**
 * binary_to_uint - convert a number in binary of a unsigned integer
 * @b: number binary
 *
 * Return: 0 or converter number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i = 0;
	int j = 0;
	int basedos = 1;

	if (b == NULL)
	{
		return (0);
	}
for (j = 0; b[j] != 0; j++)
{
	if (b[j] != '0' && b[j] != '1')
	{
		return (0);
	}
}
j--;
	while (b[i] != 0)
	{
		if (b[i] == '1')
		{
			r = r + basedos;
		}
		basedos = basedos * 2;
		i++;
	}
	return (r);
}
