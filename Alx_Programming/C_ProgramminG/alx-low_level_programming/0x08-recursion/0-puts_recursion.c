#include "main.h"

/**
 * _puts_recursion -> This is a function to print a string recursivly
 * @s: string
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
