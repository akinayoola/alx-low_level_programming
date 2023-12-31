#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - function that copies the string
 * @dest: character variable
 * @src: character variable
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
