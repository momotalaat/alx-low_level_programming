#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to src
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
        char *ptr = dest;

        while (*src)
        {
        *dest = *src;
        dest++;
        src++;
        }

        *dest = '\0';
        return (ptr);
}
