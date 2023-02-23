#include "main.h"

/**
 * print_line - Prints underscore n times
 * @n: Number of underscores to print
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
