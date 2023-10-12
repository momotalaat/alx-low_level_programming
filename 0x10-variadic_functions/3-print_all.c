#include "variadic_functions.h"

/**
 *print_all - a function that prints anything
 *@format: list of arguments types
 * Return: no thing
 */

void print_all(const char * const format, ...)
{
	char *str = "", *str1;
	int i = 0;
	va_list ar;

	va_start(ar, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str, va_arg(ar, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(ar, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(ar, double));
					break;
				case 's':
					str1 = va_arg(ar, char*);
					if (!str1)
						str1 = "(nil)";
					printf("%s%s", str, str1);
					break;
				default:
					i++;
					continue;
			}

			str = ", ";
			i++;
		}
	}
	printf("\n");

	va_end(ar);
}
