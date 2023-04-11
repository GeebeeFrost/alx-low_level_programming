#include "main.h"

/**
 * power - Returns the result of raising a number
 * to power
 * @base: Number to be raised
 * @exp: Exponent
 *
 * Return: n raised to power of exp
 */
int power(int base, unsigned int exp)
{
	int result;
	unsigned int i;

	if (base == 0)
		return (0);
	if (exp == 0)
		return (0);
	if (exp == 1)
		return (base);
	result = base;
	for (i = 1; i < exp; i++)
		result *= base;
	return (result);
}

/**
 * set_bit - Sets the value of a bit at given index to 1
 * @n: Pointer to number
 * @index: Position of bit to be set
 *
 * Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int value;

	if (index > 32)
		return (-1);
	value = *n >> index;
	if (!(value & 1))
		*n = *n + power(2, index);
	return (1);
}
