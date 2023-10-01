#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: number
 *
 * Return: -1 in case of n lower than 0, 1 in case of n equall 0
 *		factorial of the number if success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
