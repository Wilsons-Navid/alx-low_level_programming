#include <stdio.h>
/**
 * main- entry point
 * Return: 0
 */
int main(void)
{

printf("Size of a char: %i  byte(s)\n", (unsigned long)sizeof(char));
printf("Size of a int: %i bytes(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %i  byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %i  byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %i  byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
