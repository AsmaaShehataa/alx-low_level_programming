#include "main.h"
#include <stdlib.h>

/**
 * countw - count the string length
 * @s: string to split
 * Return: number of words
*/

int countw(char *s)
{
	int feggie, c, w;

	feggie = 0;

	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			feggie = 0;
		else if (feggie == 0)
		{
			feggie = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: poitner string of words separated
*/

char **strtow(char *str)
{
	char **soo, *tmp;

	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = countw(str);
	if (words == 0)
		return (NULL);

	soo = (char **)malloc(sizeof(char *) * (words + 1));
	if (soo == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				soo[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	soo[k] = NULL;
	return (soo);
}
