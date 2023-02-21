#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers to 98 starting from n
 * @n: The starting point
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				printf("\n");
				return;
			printf(", ");
			}
		}
	}
	else
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				printf("\n");
				return;
			printf(", ");
		}
}
