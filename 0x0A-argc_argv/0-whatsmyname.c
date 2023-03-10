#include <stdio.h>

/**
 * main - Function to print name of program
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
