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
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
