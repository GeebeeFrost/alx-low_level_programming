#include "main.h"

/**
 * puts2 - Prints every other character of string starting with the first
 * @str: String to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
