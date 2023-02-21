#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers to 98 starting from n
 * @n: The starting point
 */
void print_to_98(int n)
{
	for (int i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i == 98)
			return;
		printf(", ");
	}
	_putchar('\n');
}
