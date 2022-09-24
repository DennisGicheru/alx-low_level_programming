#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers.
 *@a: integer pointer 1.
 *@b: integer pointer 2.
 *Return: no return.
*/
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
