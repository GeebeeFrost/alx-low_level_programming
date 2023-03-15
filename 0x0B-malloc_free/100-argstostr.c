#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments
 * @ac: Number of arguments
 * @av: Array of strings
 *
 * Return: Pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int length, i, j, k;

	k = 0;
	length = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
		length++;
	}
	result = malloc((sizeof(char) * length) + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';
	return (result);
}
