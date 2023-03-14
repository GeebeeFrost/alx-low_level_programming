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
	while (*str != '\0')
	{
		length++;
	}
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
