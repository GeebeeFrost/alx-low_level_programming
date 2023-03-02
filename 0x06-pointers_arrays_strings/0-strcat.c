#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *result;
	int i, j, length;

	for (i = 0, dest[i] != '\0'; i++)
	{
		result[i] = dest[i];
		length = i;
	}

	for (j = 0; src[j] != '\0'; j++)
		*(result + length + 1) = src[j];
	return (result);
}
