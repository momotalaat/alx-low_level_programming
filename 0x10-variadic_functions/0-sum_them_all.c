#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: counter
 * @...: numbers to calculate
 * Return: operating result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0;
	va_list ar;

	va_start(ar, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ar, int);

	va_end(ar);

	return (sum);
}
