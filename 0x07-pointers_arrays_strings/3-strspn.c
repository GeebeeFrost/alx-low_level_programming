#include "main.h"

/**
 * _strspn - Returns the length of a prefix substring
 * @s: String to check
 * @accept: Characters to be found in string
 *
 * Return: Number of bytes in string that contains all characters of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, pref, flag;

	pref = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				pref++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (pref);
	}
	return (0);
}