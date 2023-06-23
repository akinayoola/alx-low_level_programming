#include "main.h"

/**
 * print_sign - is to print the sign of a number
 *@n: is the number to be determined
 *
 * Return: 1 for positive, 0 for zero and -1 for negative
 */

int print_sign(int n)

{
	if (n > 0)
	{
		return (1); }

	else if (n == 0)
	{
		return (0); }

	else
	{
		return (-1); }
}
