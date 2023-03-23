#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings with specified seperator
 * @seperator: String to print between strings
 * @n: Number of strings passed to function
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if ((seperator != NULL) && (i != (n - 1)))
			printf("%s", seperator);
	}
	va_end(ap);
	printf("\n");
}
