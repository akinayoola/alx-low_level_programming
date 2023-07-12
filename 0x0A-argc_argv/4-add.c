#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument to count
 * @argv: pointer argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;
	int j;
	char *number;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		number - argv[i];

	for (j = 0; number[j] != '\0'; j++)
	{
		if (!isdigit(number[j]))
		{
			printf("Error\n");
			return (1);
		}
	}

	sum += atoi(number);

	}
	printf("%d\n", sum);
	return (0);
}
