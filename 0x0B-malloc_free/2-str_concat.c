#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to allocate space in
 *	memory or null if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int x, int y;

	if (s1 == NULL || s2 == NULL)
		s1 = "";

	y = x = 0;
	while (s1[x] != '\0' || s2[y] != '\0')
		x++, y++

	array = malloc(sizeof(char) * (x + y + 1));

	if (array == NULL)
		return (NULL);

	x = y = 0;
	while (s1[x] != '\0')
	{
		array[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		array[x] = s2[y];
		x++, y++;
	}
	array[x] = '\0';

	return (array);
}
