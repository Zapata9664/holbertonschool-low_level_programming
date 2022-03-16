#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name for print
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
	{
		(*f)(name);
	}
	else
		return;
}
