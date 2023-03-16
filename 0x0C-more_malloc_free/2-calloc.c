#include "main.h"
#include <stdlib.h>
#include <limits.h>

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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if ((size * nmemb) > INT_MAX)
		return (NULL);
	result = malloc(size * nmemb);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*((char *)result + i) = 0;
	return (result);
}
