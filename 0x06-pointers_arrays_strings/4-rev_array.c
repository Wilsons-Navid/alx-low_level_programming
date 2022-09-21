#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse  an array of integers
 * @a: array
 * @n: number of elements
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
int i;
int b;

for (i = 0; i < n / 2; i++)
{
b = a[i];
										a[i] = a[n - i - 1];
										a[n - i - 1] = b;

}
}
