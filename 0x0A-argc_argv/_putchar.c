#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character
 * Return: 1 if true and -1 if not successful
 */

int _putchar(char c)
{
return(write(1, &c, 1));
}
