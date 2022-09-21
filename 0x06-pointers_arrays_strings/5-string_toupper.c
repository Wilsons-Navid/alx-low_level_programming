#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * string_toupper - changes to upper case
 * @b: string
 * Return: uppercase string
*/

char *string_toupper(char *b)
{
int i = 0;

while (b[i])
{
b[i] = toupper(b[i]);
i++;
										}

return (b);


}


