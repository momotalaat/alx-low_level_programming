#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc : arg count
 * @argv : arg list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int x = 1;

	while (x < argc)
	{
		if (*argv[x] == NULL)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[x]);
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
