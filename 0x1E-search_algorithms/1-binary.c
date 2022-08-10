#include "search_algos.h"

/**
 * @brief 
 * 
 * @param array 
 * @param size 
 * @param value 
 * @return int 
 */

int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t mid = (left + right) / 2;
    size_t i = 0;

    if (array == NULL)
        return(-1);
    
    while (left <= right)
    {
        i = left;
        printf("Searching in array: ");
        while (i <= right)
        {
            printf("%d", array[i]);
            if (i != right)
                printf(", ");
            else
                printf("\n");
            i++;
        }
        mid = (left + right) / 2;
        
        if (array[mid] == value)
            return (mid);
        else if (value < array[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return (-1);
}