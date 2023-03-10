#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
