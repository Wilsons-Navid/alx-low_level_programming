#include "main.h"

/**
 * largest_number - function to return largest number
 * @a: first interger
 * @b: secong interger
 * @c: third interger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
