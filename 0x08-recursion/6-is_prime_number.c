#include "main.h"

/**
 * is_prime_number - afunction to returns 1 if the input integer
 *			is a prime number, otherwise return 0.
 * @n: integer
 * Return: 1 if true, 0 if false
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - afunction to check if a number is prime recursively
 * @n:  integer
 * @p_n: number
 * Return: 1 if true, 0 if false
 */

int prime_number(int n, int p_n)
{
	if (p_n	== 1)
		return (1);
	if (n % p_n == 0 && p_n > 0)
		return (0);
	return (prime_number(n, p_n - 1));
}
