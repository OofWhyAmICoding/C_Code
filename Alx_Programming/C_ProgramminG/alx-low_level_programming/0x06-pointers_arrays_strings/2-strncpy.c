#include "main.h"

/**
 * _strncpy - Copy a string strting from index 0 of 'dest'.
 * @dest: string
 * @src: string
 * @n: number of chars to copy
 * Return: 'dest' edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0'; i++)
if (i < n)
dest[i] = src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}