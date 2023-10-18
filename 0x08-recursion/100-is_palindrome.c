#include "main.h"

/**
 * is_palindrome - afunction to checks if a string is a palindrome
 * @s: string
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - afunction to returns the length
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * pal_check - afunction to checks the characters recursively of palindrome
 * @s: string
 * @r: repetition
 * @len: length
 * Return: 1 if true, 0 if false
 */

int pal_check(char *s, int r, int len)
{
	if (*(s + r) != *(s + len - 1))
		return (0);
	if (r >= len)
		return (1);
	return (pal_check(s, r + 1, len - 1));
}

