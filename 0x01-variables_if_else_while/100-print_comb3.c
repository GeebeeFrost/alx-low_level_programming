#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int first = 0;
	int second;

	while (first < 10)
	{
		second = 0;
		while (second < 10)
		{
			if (first < second)
			{
				putchar(first + '0');
				putchar(second + '0');

				if (first + second != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
