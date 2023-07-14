#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array memory
 * @size: size of array
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mtr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mtr = malloc(nmemb * size);
	if (mtr == NULL)
	{
		return (NULL);
	}
	memset(mtr, 0, nmemb * size);

	return (mtr);
}
