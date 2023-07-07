#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - function that copies the memory are
 * @dest: destination of variable
 * @src: source of variable
 * @n: integer
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        char *ptr_dest = dest;
        char *ptr_src = src;

        while (n > 0)

        {*ptr_dest = *ptr_src;
                ptr_src++;
                ptr_dest++;
                n--;
        }
        return (dest);
}
