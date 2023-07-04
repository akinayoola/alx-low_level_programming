#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * set_string -  function that sets the value of a pointer to a char
 * @s: character variable
 * @to: character variable
 *
 * Return: 0
 */

void set_string(char **s, char *to)
{
	free(*s);
	*s = (char *)malloc((strlen(to) + 1) * sizeof(char));
	if (*s == NULL)
	{
		printf("memory allocation failed.\n");
		return;
	}
	strcpy(*s, to);
}

