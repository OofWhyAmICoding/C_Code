#include "main.h"
#include <stdio.h>

/**
 *swap_int - Entry point
 *@a: int to swap
 *@b:int to swap
 *Return: Always 0.
*/

void swap_int(int *a, int *b)
{
int swoop;
swoop = *a;
*a = *b;
*b = swoop;
}
