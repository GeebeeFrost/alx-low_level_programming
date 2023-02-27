#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	char first, last;
	int length, i, j;

	for (length = 0; s[length] != '\0'; length++)
	{}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		first = s[i];
		last = s[j];
		s[i] = last;
		s[j] = first;
		j--;
		i++;
	}
}
