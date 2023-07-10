#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create character of arrays
 * @c: character variable to be stored in
 * @size: size of the array
 *
 * Return: 0
 */


char *create_array(unsigned int size, char c)
{
	int i;
	char *new_arr;

	if (size == 0)
	{
		return (NULL);
	}
	new_arr = (char *)malloc(sizeof(char) * size);
	if (new_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (int)size; i++)
	{
		new_arr[i] = c;
	}
	return (new_arr);
}
