#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - finds the value of x raised to y
 * @x: first intger
 * @y: second integer
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{ return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
