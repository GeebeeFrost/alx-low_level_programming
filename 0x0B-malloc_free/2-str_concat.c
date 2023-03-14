#include "main.h"
#include <stdlib.h>

/**
 * strilen - Returns the length of a string
 * @s: String
 *
 * Return: Length of string;
 */
int strilen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
		length++;
	return (length);
}

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, j, length;

	if (s1 == NULL && s2 == NULL)
		length = 0;
	else if (s1 == NULL)
		length = 0 + strilen(s2);
	else if (s2 == NULL)
		length = strilen(s1) + 0;
	else
		length = strilen(s1) + strilen(s2);
	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		i = 0;
		while (*(s1 + i) != '\0')
		{
			*(result + i) = *(s1 + i);
			i++;
		}
	}
	if (s2 != NULL)
	{
		j = 0;
		while (*(s2 + j) != '\0')
		{
			*(result + i) = *(s2 + j);
			i++;
			j++;
		}
	}
	return (result);
}
