#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *mtr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	mtr = malloc((max - min + 1) * sizeof(int));
	if (mtr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		mtr[i] = min + 1;
	}
	return (mtr);
}

