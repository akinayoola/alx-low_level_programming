#include "main.h"

/**
 * puts2 -  prints every other character
 *@str: string character
 *
 * return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')

	{ _putchar(str[i]);
	i++; }
	_putchar('\n');
}
