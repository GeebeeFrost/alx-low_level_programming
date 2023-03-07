#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number
 *
 * Return: Natural square root or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return _sqrt(n, 0);
}

/**
 * _sqrt - Checks if i is square root of n
 * @n: Number
 * @i: Iterator/tentative squareroot
 *
 * Return: i if is square root or -1 if no natural square root
 */
int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}