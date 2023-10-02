#include "main.h"

/**
 * _islower - function to check character is lowercase
 * @c: character
 * Return: 1 or 0
 */
int _islower(int c)
{
        if (c >= 97 && c <= 122)
                return (1);
        return (0);
}
