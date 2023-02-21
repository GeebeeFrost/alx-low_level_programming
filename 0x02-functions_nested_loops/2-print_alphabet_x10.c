#include "main.h"

/**
 * print_alphabet_x10 - Function to print alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	char line = 0;

	while (line < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		line++;
	}
}
