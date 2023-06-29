#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *  _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i =0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
