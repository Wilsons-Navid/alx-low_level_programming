#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function to print reverse recursion
 * Return: Always 0
 * @s: pointer
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
