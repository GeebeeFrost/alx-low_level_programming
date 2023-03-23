#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_string - Prints a string for variadic function
 * if format character is s
 * @ap: Variable argument pointer
 */
void print_string(va_list ap)
{
	char *string;

	string = va_arg(ap, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}


/**
 * print_all - Prints anything
 * @format: List of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, flag = 0;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				flag = 1;
				break;
			case 's':
				print_string(ap);
				flag = 1;
				break;
			default:
				flag = 0;
				break;
		}
		if (flag == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
