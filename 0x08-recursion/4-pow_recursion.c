#include "main.h"

/**
 * _pow_recursion - Returns value of x to the power of y
 * @x: Number
 * @y: Power
 *
 * Return: Number raised to power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
