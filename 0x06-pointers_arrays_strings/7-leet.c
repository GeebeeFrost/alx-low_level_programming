#include "main.h"

/**
 * leet - Encodes a string in 1337
 * @str: String to be encoded
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	int i, j;
	char normal[] = "aeotlAEOTL";
	char code[] = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (normal[j] != '\0')
		{
			if (str[i] == normal[j])
			{	
				str[i] = code[j];
				j++;
			}
		}
	}
	return (str);
}
