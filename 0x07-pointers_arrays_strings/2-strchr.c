#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: String to be searched
 * @c: Character to be located
 *
 * Return: Pointer to first occurence of character or NULL if not found
 */
char *_strchr(char *s, char c)
{
	char *ptr = NULL;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}
	return (ptr);
}
