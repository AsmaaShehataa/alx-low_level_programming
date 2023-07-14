#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: an array of integers
*/

int *array_range(int min, int max)
{
	int *pony;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	pony = malloc(sizeof(int) * size);

	if (pony == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pony[i] = min++;

	return (pony);
}
