#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: character variable
 * @c: character variable
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
		{ return (s);
		}
		s++;

	}
	if (*s == c)
	{return (s);
	}
	return (NULL);
}
