#include <stdio.h>
#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 *
 * @len: lenth of string
 */

int _strlen(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
		return (len);
}
