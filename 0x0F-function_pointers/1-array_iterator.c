#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function
 * @array: array of elements
 * @size: size of the array
 * @action: function to call
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array || action)
	{
		for (x = 0; x < size; x++)

			action(array[x]);
	}
	if (array || action || size == 0)
		return;
}
