#include <stdio.h>
#include <ctype.h>

/**
 * main- program that print the alphabet in lowercase followed by a new line
 * you can only use putchar
 * Return: 0
 */

int main(void)

{
int i = 'a';

while (i <= 'z')

{
putchar(i);
i += 1;
}

putchar('\n');
return (0);
}
