#include <stdio.h>

/**
 * main - Prints largest prime factor of number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int x = 612852475143;
	long int pf;

	for (pf = 2; pf < x; pf++)
	{
		if ((x % pf) == 0)
			x = x / pf;
	}
	printf("%ld\n", pf);
	return (0);
}
