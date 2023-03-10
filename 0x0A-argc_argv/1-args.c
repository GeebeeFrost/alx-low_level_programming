#include <stdio.h>

/**
 * main - Prints number of arguments passed
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0
 */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
