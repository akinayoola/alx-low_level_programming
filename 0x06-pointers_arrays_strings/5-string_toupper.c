#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - lowercase to uppercase
 * @str: variable
 *
 * Return: 0
 */

char *string_toupper(char *str)
{
	int length = strlen(str);

	int i;

	for (i = 0; i < length; i++)
	{
		str[i] = toupper(str[i]);
	}

	return (str);
}
