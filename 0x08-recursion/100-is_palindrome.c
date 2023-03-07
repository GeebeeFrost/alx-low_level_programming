#include "main.h"

/**
 * is_palindrome - Checks whether a string is palindrome
 * @s: String to be checked
 *
 * Return: 1 if it is a palindrome or 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal_check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * _pal_check - Checks if the first letter and last letter are the same
 * @s: String
 * @i: Iterator
 * @size: Size of string
 *
 * Return: 1 if positive, 0 if negative
 */
int _pal_check(char *s, int i, int size)
{
	if (*(s + i) != *(s + size - 1))
		return (0);
	if (i >= size)
		return (1);
	return (_pal_check(s, i + 1, size - 1));
}
