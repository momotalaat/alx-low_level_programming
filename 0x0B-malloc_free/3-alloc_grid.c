#include "main.h"

/**
 * alloc_grid - a function to returns a pointer of two
 *	dimention array
 * @width: width
 * @height: hight
 * Return: a pointer to a two dimention array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		array[w] = malloc(sizeof(int) * width);

		if (array[w] == NULL)
		{
			for (; w >= 0; w--)
				free(array[w]);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			array[w][h] = 0;
	}
	return (array);
}
