#include <stdio.h>

/**
 * main - Prints 1 to 100 in fizzbuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if ((i % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		if ((i % 5) == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
