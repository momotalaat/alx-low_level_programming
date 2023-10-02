#include "main.h"

/**
 * _strstr - a function locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer of located substring
 *             zero if the substring not found
 */
char *_strstr(char *haystack, char *needle)
{
        for (; *haystack != '\0'; haystack++)
        {
                char *i = haystack;
                char *n = needle;

                while (*i == *n && *n != '\0')
                {
                        i++;
                        n++;
                }
                if (*n == '\0')
                        return (haystack);
        }
        return (0);
}
