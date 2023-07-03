#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @n: interger value
 * @b: character variable
 * @s: character variable
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)

	{*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
