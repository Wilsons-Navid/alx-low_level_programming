#include <stdio.h>

/**
 * _puts_recursion - function
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
if (*s != '\0')	
{
putchar(*s);
s = s + 1;
}
putchar('\n');
}
