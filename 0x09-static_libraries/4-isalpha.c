#include "main.h"

/**
 * _isalpha - function check if character is lowercase
 * @c: character
 * Return: 1 or 0
 */
int _isalpha(int c)
{
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
                return (1);
        }
        return (0);
}
