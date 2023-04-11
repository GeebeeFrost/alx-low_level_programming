#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: Number to be converted
 */
void print_binary(unsigned long int n)
{
	int printed_flag = 0;
	unsigned long int checker = 1;

	checker <<= (sizeof(unsigned long int) * 8) - 1;
	while (checker > 0)
	{
		if (n & checker)
		{
			_putchar('1');
			printed_flag = 1;
		}
		else if (printed_flag)
		{
			_putchar('0');
		}
		checker >>= 1;
	}
	if (!printed_flag)
		_putchar('0');
}
