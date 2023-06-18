#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *  main - Entry point
 *
 * Return; return 0 for successful execution
 */
	int main(void)
	{int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number; %d\n", n);
	if (n > 0)
	{	printf("%d\n is positive", n);
	}
	else if (n == 0)
	{	printf("%d\n is zero", n);
	}
	else if (n < 0)
	{	printf("%d\n is negative", n);
	}
	return (0);
}
