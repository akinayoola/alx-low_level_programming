#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of he two diagonals of a square matrix of integers
 * @a: integer value
 * @size: size of the sides of the square
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
