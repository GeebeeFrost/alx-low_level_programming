#include "main.h"

/**
 * get_endianness - Checks the endianness of a system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int test_digit = 1;
	int *ptr = &test_digit;

	return (*ptr);
}
