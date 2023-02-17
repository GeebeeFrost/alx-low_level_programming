#include <stdio.h>

/**
 * main - Program to print all single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%i", digit);
	putchar('\n');
	return (0);
}
