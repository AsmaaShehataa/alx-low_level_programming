#include "main.h"

/**
 * times_table - function prints the 9 times table, starting with 0.
 * Return: (0)
*/

void times_table(void)
{
	int i, j, k;

	while (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;

		if (k <= 9)
			_putchar(' ');
		else
			_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
