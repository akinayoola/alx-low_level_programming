#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -  function that prints a string, followed by a new line
 * @s: character variable
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
		}
