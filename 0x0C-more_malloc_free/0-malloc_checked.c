#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	return (result);
}
