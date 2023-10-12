#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: arguments counter
 *@argv: array of arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x, size;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (x = 0; x < size; x++)
	{
		if (x == size - 1)
		{
			printf("%02hhx\n", ptr[x]);
			break;
		}
		printf("%02hhx ", ptr[x]);
	}

	return (0);
}
