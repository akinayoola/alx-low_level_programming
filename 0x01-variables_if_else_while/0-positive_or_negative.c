#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *  main - Entry point
 *
 * Return; Always 0 (Success)
 */
	int main(void)
{int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(the number; "%d", n);
	if (n > 0) 
	{printf("is positive\n");}
	if (n == 0)
	{printf("is zero\n");}
	if (n < 0)
	{printf("is negative\n");}
	return (0);
}