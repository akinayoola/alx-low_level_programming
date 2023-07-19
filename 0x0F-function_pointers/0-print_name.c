#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: input variable
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f != NULL)
	f(name);
}
