#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input string
 * @accept: input string
 *
 * Return: number of characters
*/

unsigned int _strspn(char *s, char *accept)
{
	int k = 0;
	unsigned int n = 0;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				n++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
