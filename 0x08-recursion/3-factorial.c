#include <stdio.h>
#include "main.h"

/**
 * int factorial - function to calculate the factorial of a number
 * @s: string
 * Return: factorial of a number
 */

int factorial(int n)
{
if (n < 0)
return -1;
else if (n == 0)
return 1;
else
return (n * factorial(n - 1));
}

