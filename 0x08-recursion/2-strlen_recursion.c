#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String
 *
 * Return: Length of string
 */
int length = 0;
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		length++;
		_strlen_recursion(s + 1);
	}
	return (length);
}
