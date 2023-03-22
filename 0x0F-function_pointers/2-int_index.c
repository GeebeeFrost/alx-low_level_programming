#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @array: Array of integers
 * @size: Number of elements in array
 * @cmp: Function to compare values
 *
 * Return: Index of first element that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
