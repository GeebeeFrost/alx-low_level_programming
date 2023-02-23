#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int number, line;

	for (line = 0; line < 10; line++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number >= 10)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
