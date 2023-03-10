#include "main.h"

/**
 * _strcpy - copies string from one pointed to another
 * @dest: Destination pointed
 * @src: Source pointed
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	for (length = 0; src[length] != '\0'; length++)
	{}

	for (i = 0; i <= length; i++)
		dest[i] = src[i];
	return (dest);
}
