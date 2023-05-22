#include "main.h"

/**
 * main - Program to print "_putchar"
 *
 * Return: 0
 */

int main(void)
{
	char txt[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(txt[c]);
	_putchar('\n');
	return (0);
}
