#include "main.h"

/**
 * cap_string - Capitalizes all words in string
 * @str: String with words
 *
 * Return: String with capitalized words
 */
char *cap_string(char *str)
{
	int i;
	int letter;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'SPACE' || str[i] == '\t' ||
				str[i] == '\n' || str[i] == ',' ||
				str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' ||
				str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			letter = i + 1;
			if (str[letter] >= 'a' && str[letter] <= 'z')
				str[letter] = str[letter] - 32;
		}
	}
	return (str);
}
