#include <stdio.h>

/**
 * main - print singlr digits
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}