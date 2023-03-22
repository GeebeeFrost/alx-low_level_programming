#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcodes of main function
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int number, i;
	char *codes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("Error");
		exit(2);
	}
	codes = (char *)&main;
	for (i = 0; i < number; i++)
	{
		printf("%.2hhx", codes[i]);
		if (i < (number - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
