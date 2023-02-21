#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number of which the last digit is to be printed
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		_putchar(-(n % 10) + '0');
	else
		_putchar(n % 10 + '0');
	return (n % 10);
}

