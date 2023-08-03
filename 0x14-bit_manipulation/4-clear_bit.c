#include "main.h"

/**
 * clear_bit - sets the value of a bit to a 0 given index.
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 on success -1 if failed
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 || n == NULL)
		return (-1);

	*n = (~(1UL << index) & *n);
		return (1);
}
