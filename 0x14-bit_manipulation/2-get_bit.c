#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number to be converted
 * @index: Position to return bit
 *
 * Return: Value of bit at index or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 32)
		return (-1);
	value = n >> index;
	return (value & 1);
}
