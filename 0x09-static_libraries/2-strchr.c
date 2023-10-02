#include "main.h"

/**
 * _strchr - function to locates character in string
 * @s: string
 * @c: character
 * Return: first occurrence of  character
 */
char *_strchr(char *s, char c)
{
        int i;

        for (i = 0; s[i] >= '\0'; i++)
        {
                if (s[i] == c)
                        return (&s[i]);
        }
        return (0);
}
