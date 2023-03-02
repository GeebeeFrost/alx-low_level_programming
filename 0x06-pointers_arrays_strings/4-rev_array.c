#include "main.h"

/**
 * reverse_array - Reverses content of array of integers
 * @a: Array of integers
 * @n: Number of integers in array
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
		i++;
	for (; i > 0; i--)
	{
		_putchar(a[i] + '0');
		if (i != 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
