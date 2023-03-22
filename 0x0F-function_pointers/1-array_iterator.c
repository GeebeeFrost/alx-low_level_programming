#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes function on each element of an array
 * @array: Array of integers
 * @size: Size of array
 * @action: Pointer to the function
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
