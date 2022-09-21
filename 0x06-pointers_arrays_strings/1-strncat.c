#include "main.h"
#include <stdio.h>

/**
 * _strncat - concantenates
 * @dest: string
 * @src: string
 * @n: bytes to be copied
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;

while (dest[i] != '\0')
{
i++;
}

for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
										}
dest[i + j] = '\0';

return (dest);
}
