#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number will be prestened in binary
 * Return: void (0) on success
*/

void print_binary(unsigned long int n)
{
	int k, counter = 0;
	unsigned long int myVal;

	for (k = 63; k >= 0; k--)
	{
		myVal = n >> k;
		if (myVal & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		_putchar('0');
	}
	if (!counter)
	_putchar('0');
}
