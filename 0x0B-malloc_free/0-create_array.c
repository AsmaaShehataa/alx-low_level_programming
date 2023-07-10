#include "main.h"
#include <stdlib.h>


/**
 * *create_array - create an array with chars
 * @size: input size
 * @c: output size
 * Return: always (0) on success
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
