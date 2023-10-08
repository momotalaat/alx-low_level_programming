#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: bytes
 * @size: size
 * Return: null if nmemb, size is 0 or malloc fails
 *		returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (0);
	call = malloc(nmemb * size);
	if (call == NULL)
		return (0);
	for (x = 0; x < (nmemb * size); x++)
		call[x] = 0;
	return (call);
}
