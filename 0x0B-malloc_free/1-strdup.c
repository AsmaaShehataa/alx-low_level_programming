#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a new string
 * @str: output string
 * Return: pointer
*/

char *_strdup(char *str)
{
	char *newstr;
	size_t length = 0;
	int k = 0;

	if (str == NULL)/*checking the length of the string in main file*/
		return (NULL);

	length = 0;

	while (str[length] != '\0')
		length++;

	newstr = malloc((length + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		newstr[k] = str[k];

	return (newstr);
}
