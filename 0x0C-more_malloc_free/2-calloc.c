#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length
 * Return: null if fais,s2 if n >= s2, '\0' if bassed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	int x;

	while (s1[s1_length] != '\0' && s2[s2_length] != '\0')
		s1_length++, s2_length++;

	if (n >= s2_length)
		n = s2_length;
	nconcat = malloc(s1_length + n + 1);
	if (noconcat == NULL)
		return (0);
	for (x = 0; x < s1_length; x++)
		nconcat[x] = s1[x];
	for (x = 0; x < n; x++)
		nconcat[x + s1_length] = s2[x];
	nconcat[s1_length + n] = '\0';
	return (nconcat);
}
