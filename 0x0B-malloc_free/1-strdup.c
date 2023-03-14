#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string
 * @str: String to be duplicated
 *
 * Return: Pointer to new string or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= length)
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
