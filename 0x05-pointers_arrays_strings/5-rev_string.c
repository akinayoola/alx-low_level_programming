#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function to reverse a string
 * @s: string to be reversed
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;
	char temp;
	for (i = 0; i++)
		j = length;
		j--;
	{ temp = s[i];
		s[i] = s[j];
		s[j] = temp; }
}
