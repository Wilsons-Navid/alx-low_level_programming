#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* 
 * main-entry point
 * return: 0
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		/* your code goes there */
		if (n > 0) 
		{	/*returns positive*/
			printf("%d is positive\n", n);
	        } else if (n < 0)
		{	/*returns negative*/      
		 	printf("%d is negative\n", n);
		} else if (n == 0)
		{	/*returns zero*/   
			printf("%d is zero\n", n);
		}
		return (0);
}
