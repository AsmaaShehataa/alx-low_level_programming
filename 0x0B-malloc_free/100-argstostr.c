#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments
 * @ac: argument list
 * @av: argument list
 * Return: pointer to the concatenated argument
*/

char *argstostr(int ac, char **av)
{
	char *result;

	int i, n, r = 0;

	int l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; n < av[i][n]; n++)
			l++;
	}
	l += ac;

	result = malloc(sizeof(char) * l + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			result[r] = av[i][n];
			r++;
		}
		if (result[r] == '\0')
		{
			result[r++] = '\n';
		}
	}
	return (result);
}
