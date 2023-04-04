#include "main.h"
#include <stdio.h>
/**
 *_puts - a function taht prints a string followed by anew line
 *@str: string input
 *Return: 0
 */

void _puts(char *str)
{
int index;

for (index = 0; str[index] != '\0' ; index++)

{
putchar(str[index]);
}
putchar('\n');
}
