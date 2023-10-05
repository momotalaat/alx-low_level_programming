#include "main.h"

/**
 * create_array -  a function that creates an array of characters
 * @size: size
 * @c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	return (NULL);

	while (size--)
		array[size] = c;

	return (array);
}
