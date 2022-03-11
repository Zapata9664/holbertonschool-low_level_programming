#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - save memory
 * @b: number of bytes
 *
 * return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
        void *v = malloc(b);

        if (v == NULL)
        {
            exit(98);
        }
        return (ptr);

}
