#include "main.h"
#include <stdio.h>

/**
 *_strlen - calculate the length of a string
 *@s: string
 *Return: length of input string
 */

int _strlen(char *s)
{
int index;

for (index = 0; s[index] != '\0' ; index++)
;
return (index);
}
