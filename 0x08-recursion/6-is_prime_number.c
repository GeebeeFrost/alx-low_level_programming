#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: Number to be checked
 *
 * Return: 1 if n is prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_factor_checker(n, 2));
}

/**
 * _factor_checker - Checks if i is a factor of n
 * @n: Number
 * @i: Tentative factor/iterator
 *
 * Return: 0 if i is a factor or 1 if it is not
 */
int _factor_checker(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_factor_checker(n, i + 1));
}
