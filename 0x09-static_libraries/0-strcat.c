#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: destination variable
 * @src: source variable
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
        char *ptr = dest;

        while (*ptr != '\0')
        { ptr++; }

        while (*src != '\0')
        {*ptr = *src;
                ptr++;
                src++;
        }
        *ptr = '\0';
        return (dest);
}
