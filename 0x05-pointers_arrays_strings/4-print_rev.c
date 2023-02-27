#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int i;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{}

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
