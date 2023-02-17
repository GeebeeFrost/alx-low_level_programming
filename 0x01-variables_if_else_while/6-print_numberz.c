#include <stdio.h>

/**
 * main - Program to print single digit numbers of base 10 using putchar
 *
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	putchar('\n');
	return (0);
}
