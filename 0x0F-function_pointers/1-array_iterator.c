#include <stdio.h>
#include <stdlib.h>

#include "function_pointers.h"

/**
 * array_iterator - change array
 * @array: array
 * @size: variable
 * @action: function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
