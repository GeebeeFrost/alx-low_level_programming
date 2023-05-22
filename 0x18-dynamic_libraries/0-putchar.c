#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints a character
 * @c: Character to print
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
