#include <stdio.h>

/**
 * _puts - a function to print string followed by new line
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {
                putchar(str[i]);
        i++;
        }
                putchar('\n');
}
