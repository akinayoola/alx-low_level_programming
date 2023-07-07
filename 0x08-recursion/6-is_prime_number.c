#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime that prints prime number
 * @n: integer variable
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 0)
	{
		return (0);
	}
	if (i == 1)
	{return (1);
	}
	else if (i = 2 || i < n)
	{ return (1);
	}
	else(n % i == 0)
	{return (0);
	}
}
