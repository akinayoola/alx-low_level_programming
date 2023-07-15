#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @new_size: size of new memory
 * @old_size: size of o;d memoru
 * @ptr: read length of string
*
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copy_size = old_size;
	if (new_size < old_size)
	{
		copy_size = new_size;
	}

	memcpy(new_ptr, ptr, copy_size);
	free(ptr);

	return (new_ptr);
}
