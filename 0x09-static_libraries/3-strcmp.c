#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
        while (*s1 != '\0' && *s2 != '\0')
        {
                if (*s1 != *s2)
                {
                        return (*s1 - *s2); }
                s1++;
                s2++;
        }
        if (*s1 == '\0' && *s2 != '\0')
        {return (-1); }
        else if (*s1 != '\0' && *s2 == '\0')
        {return (1); }
        else
        {return (0); }
}
