#include "main.h"

/**
 * reverse_array - Reverses content of array of integers
 * @a: Array of integers
 * @n: Number of integers in array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
