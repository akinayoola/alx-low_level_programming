#include <stdio.h>

/**
 * leet - encodes a string into 1337 (leet speak)
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetMap[] = "aAeEoOtTlL";
	char leetReplace[] = "4433007711";
	int i, j;

	while (*ptr != '\0')
	{
		i = 0;
		j = 0;

		while (leetMap[i] != '\0')
		{
			if (*ptr == leetMap[i])
			{
				*ptr = leetReplace[j];
				break;
			}

			i++;
			j++;
		}

		ptr++;
	}

	return str;
}
