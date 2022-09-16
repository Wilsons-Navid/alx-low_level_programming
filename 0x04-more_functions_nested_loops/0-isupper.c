#include "main.h"

/**
 *_isupper -function to check upper case
 * @c: value to be tested
 * Return: 1 whether true, otherwise 0
 */

int _isupper(int c)
{
if ((c >='A') && (c <= 'Z'))
{
return (1);
}

return (0);
}
