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

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' ||
				str[i] == '\n' || str[i] == ',' ||
				str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' ||
				str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
