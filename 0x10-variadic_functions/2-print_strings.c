#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: separator
 * @n: counter
 * Return: no thing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ar;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ar, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ar);
}
