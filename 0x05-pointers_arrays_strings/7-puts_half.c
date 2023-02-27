#include "main.h"

/**
 * puts_half - Prints second half of string followed by new line.
 * @str: String to be printed half of
 */
void puts_half(char *str)
{
	int length, start, i;

	for (length = 0; str[length] != '\0'; length++)
	{}

	if (length % 2 == 0)
		start = length / 2;
	else
		start = ((length - 1) / 2) + 1;

	for (i = start; i <= length - 1; i++)
		_putchar(str[i]);
	_putchar('\n');
}
