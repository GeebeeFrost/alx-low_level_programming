#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates array of integers
 * @min: Starting point
 * @max: End point
 *
 * Return: Pointer to created array
 */
int *array_range(int min, int max)
{
	int *result;
	int numbers, i;

	numbers = 0;
	if (min > max)
		return (NULL);
	numbers = ((max - min) + 1);
	result = malloc(sizeof(int) * numbers);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < numbers; i++)
		*(result + i) = min + i;
	return (result);
}