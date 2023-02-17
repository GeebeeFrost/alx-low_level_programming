#include <stdio.h>

/**
 * main - Program to print 2 pairs of numbers
 *
 * Return: 0
 */

int main(void)
{
	int first, second;

	for (first = 0; first <= 99; first++)
	{
		for (second = 0; second <= 99; second++)
		{
			if (second > first)
			{
				putchar(first / 10 + 48);
				putchar(first % 10 + 48);
				putchar(' ');
				putchar(second / 10 + 48);
				putchar(second % 10 + 48);

				if (first * 100 + second != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
