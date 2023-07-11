#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - Concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concated string
*/

char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	size_t len1;
	size_t  len2;
	size_t i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	conc_str = malloc(len1 + len2 + 1);

	if (conc_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		conc_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		conc_str[i + j] = s2[j];

	conc_str[len1 + len2] = '\0';

	return (conc_str);
}
