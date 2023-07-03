#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: input variable
 * Return: Always (0) on success
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 1; i < 8; i++)
	{
		for (j = 1; j < 8; j++)

		_putchar(a[i][j]);
		_putchar('\n');
	}
}
