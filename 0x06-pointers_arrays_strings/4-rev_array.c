#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a:first pointer
 * @n: integer
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}

