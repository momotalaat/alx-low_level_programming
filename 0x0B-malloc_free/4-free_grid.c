#include "main.h"

/**
 * free_grid -  frees a grid previously created
 * @grid: array
 * @height: hight
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	do
	{
		free(grid[x]);
		x++;
	} while (x < height);

	free(grid);
}
