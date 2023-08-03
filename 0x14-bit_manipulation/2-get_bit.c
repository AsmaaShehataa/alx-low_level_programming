#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to search
 * @index: index of the bit
 * Return: vaue of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bvalue;

	if (index > 63)
		return (-1);

	bvalue = (n >> index) & 1;
	return (bvalue);
}
