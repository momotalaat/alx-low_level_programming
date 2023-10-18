#include "main.h"

/**
 * _sqrt_recursion - afunction to calc natural square_root
 * @n: base num of natural square root
 * Return: square_root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

/**
 * square_root - afunction to find the natural square_root
 * @n: base
 * @res: square_root
 * Return: result
 */

int square_root(int n, int res)
{
	if (res * res > n)
		return (-1);
	if (res * res == n)
		return (res);
	return (square_root(n, res + 1));
}

