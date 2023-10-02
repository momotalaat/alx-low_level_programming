#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: a string
 * @accept: a characters
 * Return: pointer to the byte or NULL if no byte
 */
char *_strpbrk(char *s, char *accept)
{
        char *p;
        int i, r;

        i = 0;
        while (s[i] != '\0')
        {
                r = 0;
                while (accept[r] != '\0')
                {
                        if (accept[r] == s[i])
                        {
                                p = &s[i];
                                return (p);
                        }
                        r++;
                }
                i++;
        }
        return (0);
}
