#include<stdio.h>
#include"main.h"

/**
 * swap_int - suaps of two integers
 * @a: entero
 * @b: entero 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
