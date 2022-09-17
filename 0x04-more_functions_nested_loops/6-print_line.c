#include <stdio.h>
#include "main.h"

/**
 * print_line - function that prints line
 * @n: shows the number of times"_" is printed
 * Return: returns nothing
 */

void print_line(int n)
{
while (n-- > 0)
{
putchar('_');
}
putchar('\n');
}
