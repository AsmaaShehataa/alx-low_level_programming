#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *_strdup -  returns a pointer to a new string
 * @str: output string
 * Return: pointer
*/

char *_strdup(char *str)
{
	char *newstr;
	size_t length = 0;

	if (str == NULL)/*checking the length of the string in main file*/
		return (NULL);

	newstr = malloc((length + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	strcpy(newstr, str);
	return (newstr);
}
