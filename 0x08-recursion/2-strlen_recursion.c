#include <stdio.h>
#include "main.h"

/**
 *  _strlen_recursion - function that printas the lenght of a string
 *  @s: string
 *  Return: lemght of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
