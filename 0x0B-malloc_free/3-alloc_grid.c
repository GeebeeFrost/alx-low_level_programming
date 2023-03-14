#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to 2 dimensional
 * array of integers
 * @width: Number of elements per row
 * @height: Number of rows
 *
 * Return: Pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **result;
	int i, j, size;

	if (width <= 0 || height <= 0)
		return (NULL);
	size = width * height;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			result[i][j] = 0;
		}
	}
	return (result);
}
