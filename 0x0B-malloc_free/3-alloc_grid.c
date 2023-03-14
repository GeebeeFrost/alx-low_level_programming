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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result[i] == NULL)
		{
			free(result);
			for (j = 0; j < i; j++)
				free(result[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			result[i][j] = 0;
		}
	}
	return (result);
}
