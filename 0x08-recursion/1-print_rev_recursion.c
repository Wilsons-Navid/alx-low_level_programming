#include <stdio.h>

/**
 * _print_rev_recursion - function to print reverse recursion
 * Return: Nothing
 * @*s: pointer 
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{	
putchar(*s);
_print_rev_recursion(s - 1);
}
else
{
putchar('\n');
}
}
