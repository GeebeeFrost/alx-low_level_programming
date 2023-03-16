#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(size * nmemb);
	if (result == NULL)
		return (NULL);
	return (result);
}
