#include "3-calc.h"
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: arguments counter
 *@argv: array of arguments
 *Return: operating result
 */

int main(int argc, char *argv[])
{
	char *ptr;

	ptr = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == 0 || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((atoi(argv[3]) == 0 && *ptr == '/')
			|| (atoi(argv[3]) == 0 && *ptr == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
