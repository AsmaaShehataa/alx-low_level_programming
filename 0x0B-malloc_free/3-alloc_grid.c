#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - allocate a grid
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: the newly allocated grid
*/

int **alloc_grid(int width, int height)
{
	int **medwh;
	int x, y;

	if (height == 0 || width == 0)
		return (NULL);

	medwh = malloc(sizeof(int *) * height);
	if (medwh == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		medwh[x] = malloc(sizeof(int) * width);
		if (medwh[x] == NULL)
		{
			for (; x >= 0; x--)
				free(medwh[x]);
			free(medwh);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			medwh[x][y] = 0;
	}
	return (medwh);
}
