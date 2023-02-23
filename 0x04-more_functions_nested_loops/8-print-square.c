#include "main.h"

/**
 * print_square - Prints square
 * @n: Number of lines
 */
void print_square(int n)
{
	int hash;
	int line;

	for (line = 0; line < n; line++)
	{
		for (hash = 0; hash < n; hash++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
