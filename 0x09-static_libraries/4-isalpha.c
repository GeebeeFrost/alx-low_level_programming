#include "main.h"

/**
 * _isalpha - Checks if character is a letter
 * @c: Character to be checked
 *
 * Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
