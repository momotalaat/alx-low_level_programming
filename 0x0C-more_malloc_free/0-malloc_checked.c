#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: amount of memory to allocate
 * Return: 89 if memory failed to allocate
 *		and the allocated memory if success
 */
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);
}
