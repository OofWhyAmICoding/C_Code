#include "main.h"
#include <stdio.h>
/**
* print_alphabet - Entry point
*
* Return: 0
*/

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
putchar('\n');
}
