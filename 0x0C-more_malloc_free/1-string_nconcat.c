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
	int length, s_length, i, j;

	s_length = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s_length < 0)
		return (NULL);
	if (n >= strlen(s2))
		s_length = strlen(s2);
	length = strlen(s1) + s_length;
	result = malloc((sizeof(char) * length) + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (j = 0; j < s_length && s2[j] != '\0'; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
