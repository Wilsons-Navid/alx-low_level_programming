#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: int
 * Return: Natural sqrt of a number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (natural_root (n, 0));
}

/**
 * natural_root - finds the natural sqrt of a number
 * @n: int
 * @i: counter
 * Return: sqrt of a number
 */

int natural_root(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
else
return (natural_root(n, i + 1));
}
