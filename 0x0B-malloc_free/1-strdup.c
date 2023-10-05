#include "main.h"

/**
 * _strdup - a function that returns a pointer
 *	to allocate space in memory
 * @str: a string
 * Return: a pointer to string or  NULL if out of memory
 */
char *_strdup(char *str)
{
	char *array;
	int x = 0;
	int y;

	while (str[x] != '\0')
		x++;

	array = malloc(sizeof(char) * (x + 1));

	if (str == NULL || array == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		array[y] = str[y];

	return (array);
}
