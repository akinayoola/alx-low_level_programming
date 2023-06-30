#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalizes all words in a string
 * @str: input string
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = toupper(str[0]);


	for (i = 1; str[i] != '\0'; i++)
	{

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{

			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = toupper(str[i + 1]);
		}
	}

	return str;
}
