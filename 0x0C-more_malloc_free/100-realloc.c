#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory using malloc and free
 * @ptr: Previous malloc return
 * @old_size: Size allocated to ptr
 * @new_size: Size of new memory block
 *
 * Return: Pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *result;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		result = malloc(new_size);
		if (result == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		result = malloc(new_size);
		if (result == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			result[i] = *((char *)ptr + i);
		free(ptr);
	}
	return (result);
}
