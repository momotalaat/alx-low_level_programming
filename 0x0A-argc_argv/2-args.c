#include <stdio.h>

/**
 * main - entry point
 *@argc : arg count
 *@argv : arg list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
