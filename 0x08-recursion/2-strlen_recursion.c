#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to counte
 *
 * Return: Length of srring
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
