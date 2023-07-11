#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string 2
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = (s1 == NULL) ? 0 : strlen(s1);
	size_t len2 = (s2 == NULL) ? 0 : strlen(s2);
	char *concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(concat, s1);
	}

	if (s2 != NULL)
	{
		strcat(concat, s2);
	}

	return (concat);
}
