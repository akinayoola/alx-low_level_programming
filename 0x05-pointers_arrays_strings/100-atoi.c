#include <limits.h>
#include <stdio.h>

/**
 * _atoi -  convert a string to an integer.
 * @s: string character
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';

		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		result = result * 10 + digit;
		s++;
	}

	return (result * sign);
}
