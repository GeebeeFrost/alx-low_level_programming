#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints integers with specified seperator
 * @seperator: String to print between integers
 * @n: Number of integers
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((seperator != NULL) && (i != (n - 1)))
			printf("%s", seperator);
	}
	va_end(ap);
	printf("\n");
}
