#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to change
 * a number to another number
 * @n: The number to change
 * @m: The number to change to
 *
 * Return: The number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, checker = 1;
	unsigned int bits = 0;

	difference = n ^ m;
	checker <<= (sizeof(unsigned long int) * 8) - 1;
	while (checker > 0)
	{
		if (difference & checker)
			bits++;
		checker >>= 1;
	}
	return (bits);
}
