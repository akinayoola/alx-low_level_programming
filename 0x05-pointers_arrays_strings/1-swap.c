#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: integer one to be swapped
 * @b: interger two to be swapped
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
