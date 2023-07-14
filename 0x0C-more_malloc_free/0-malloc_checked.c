#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: intger to be allocated
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *mtc = malloc(b);
			if (mtc == NULL)
	{
		printf("malloc failed\n");
		exit(98);
	}
	return (mtc);
}
