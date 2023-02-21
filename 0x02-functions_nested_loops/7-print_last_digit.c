#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number of which the last digit is to be printed
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -n;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}

