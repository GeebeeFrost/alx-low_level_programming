#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of array of integers
 * @a: Array to be printed
 * @n: number of elements of a to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
