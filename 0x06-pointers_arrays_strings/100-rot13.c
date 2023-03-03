#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: String to be encoded
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; (normal[j] != '\0') &&
				((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z')); j++)
		{
			if (str[i] == normal[j])
				str[i] = code[j];
		}
	}
	return (str);
}
