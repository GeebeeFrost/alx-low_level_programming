#include "main.h"

/**
 * _strncpy - Copies a string, based on at most n bytes
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes of src to copy to dest
 *
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
