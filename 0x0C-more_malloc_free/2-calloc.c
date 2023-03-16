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
	int i, memb, byts;

	memb = nmemb;
	byts = size;
	if (memb == 0 || byts == 0)
		return (NULL);
	result = malloc(byts * memb);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < memb; i++)
		result[i] = 0;
	return (result);
}
