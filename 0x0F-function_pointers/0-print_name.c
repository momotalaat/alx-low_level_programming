#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name
 * @f: pointr to function
 * Return: pointer to function name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
