#include "main.h"
#include <stdio.h>

/**
*print_rev - prints string in reverse
*@s: character input
*Return
*/

void print_rev(char *s)
{
int index;

for (index = 0; s[index] != '\0'; index++)
;
for (index = index - 1; s[index] != '\0'; index--)
{
putchar(s[index]);
}
putchar('\n');
}
