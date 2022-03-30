#include "lists.h"

/**
 * 
 * 
 * 
 * 
 * 
 */

size_t print_list(const list_t *h)
{
    int count = 0;

    if (h->str == NULL)
    {
        printf("[0] (nil)\n");
    }
    else
		{
		printf("[%d] ", h->len);
		printf("%s\n", h->str); 
        }

		h = h->next;
		count++;

return (count);
}

