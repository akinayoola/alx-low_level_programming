#include "main.h"

/**
 * _puts - function that prints strings
 * @str: string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
