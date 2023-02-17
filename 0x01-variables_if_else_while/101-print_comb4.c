#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print different combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int first = 0;
	int second;
	int third;

	while (first < 10)
	{
		second = 0;
		while (second < 10)
		{
			third = 0;
			while (third < 10)
			{
				if (first < second && second < third)
				{
					putchar(first + '0');
					putchar(second + '0');
					putchar(third + '0');

					if (first + second + third != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				third++;
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
