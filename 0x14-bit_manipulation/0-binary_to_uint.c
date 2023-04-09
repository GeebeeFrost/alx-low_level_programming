#include "main.h"
#include <string.h>

/**
 * power - Returns the result of raising a number to power
 * @base: Number to be raised
 * @exp: Power being raised to
 *
 * Return: Result of raising to power
 */
int power(int base, unsigned int exp)
{
	int result;
	unsigned int i;

	if (base == 0)
		return (0);
	if (exp == 0)
		return (1);
	if (exp == 1)
		return (base);
	result = base;
	for (i = 1; i < exp; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: String of 0 and 1 chars
 *
 * Return: The converted number or 0 if there is a problem
 * with the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, highest, i;

	if (b == NULL)
		return (0);
	highest = strlen(b) - 1;
	result = 0;
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '0')
		{
			highest--;
			continue;
		}
		else
		{
			result += power(2, highest);
			highest--;
		}
	}
	return (result);
}
