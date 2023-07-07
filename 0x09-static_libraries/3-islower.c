#include "main.h"
#include <stdlib.h>

/**
 * _islower - checks for lowercase character
 *@c: to be determined
 *
 * Return: 1 if c is lower, otherwise 0
 */
int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);
}
