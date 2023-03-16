#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of second string to add
 *
 * Return: Pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int length, s_length, i, j;

	for (i = 0; i <= n && s2[i] != '\0'; i++)
	{
	}
	if (n >= strlen(s2))
		s_length = strlen(s2);
	else
		s_length = i;
	if (s1 == NULL && s2 == NULL)
		length = 0;
	else if (s1 == NULL)
		length = 0 + s_length;
	else if (s2 == NULL)
		length = strlen(s1) + 0;
	else
		length = strlen(s1) + s_length;
	result = malloc((sizeof(char) * length) + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		result[i] = s2[j];
	}
	result[i] = '\0';
	return (result);
}
