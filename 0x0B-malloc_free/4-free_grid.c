#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created
 * @grid: 2D grid
 * @height: Number of rows in the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
