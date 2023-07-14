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
	int i, size = 0;

	if (min > max)
		return (NULL);

	pony = malloc(sizeof(int) * size);

	if (pony == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pony[i] = min++;

	return (pony);
}
