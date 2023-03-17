#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	unsigned long result;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	result = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", result);
	return (0);
}
