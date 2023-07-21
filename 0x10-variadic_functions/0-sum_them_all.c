#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: integer variable
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int value = 0;
	unsigned int i;
	va_list number;

	if (n == 0)
	{
		return (0);
	}
	va_start(number, n);
	for (i = 0; i < n; i++)
	{
		value = value + va_arg(number, int);
	}
	va_end(number);
	return (value);
}
