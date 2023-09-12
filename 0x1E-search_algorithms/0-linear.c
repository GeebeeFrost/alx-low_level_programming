#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers using the
 * linear search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = %d\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
