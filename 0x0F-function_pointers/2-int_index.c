#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - find a number
 * @array: array
 * @cmp: compare numbers
 * @size: tamaño
 *
 * Return: number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size < 0)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
			if (cmp(array[index]))
			{
				return (index);
			}
	}
	return (-1);
}
