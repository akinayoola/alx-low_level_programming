#include "main.h"

/**
 * print_last_digit - prints las digit of a number
 * @b: is the number
 *
 * Return: 0
 */

int print_last_digit(int b)
{
	int last_digit = number % 10;

	printf("The last digit is: %d\n", last_digit);

	return (last_digit);
}
