#include <stdio.h>

/**
 * _puts_recursion - function to print a string
 * Return: Nothing
 * @*s: a pointer to a string
 */

void _puts_recursion(char *s)
{
while (*s != '\0')
{
putchar(*s);
*s++;
}
putchar('\n');
}
