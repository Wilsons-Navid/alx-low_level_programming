#include "main.h"

/**
 * _isalpha - function that check if c is a letter,upper or lower
 * @c: is the int that will be used as the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
