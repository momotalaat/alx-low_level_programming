#include "main.h"

/**
  * array_range - a function that creates an array of integers.
  * @min : minimum value
  * @max : maximum value
  * Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int *int_array;
	int x;

	if (min > max)
		return (0);
	int_array = malloc(sizeof(int) * (max - min + 1));
	if (!int_array)
		return (0);
	for (x = 0; x < (max - min + 1); x++)
		int_array[x] = x + min;
	return (int_array);
}
