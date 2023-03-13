#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates array of chars and initializes
 * with specific char
 * @size: Size of array
 * @c: Specific char
 *
 * Return: Pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	arr[0] = c;
	return (arr);
}
