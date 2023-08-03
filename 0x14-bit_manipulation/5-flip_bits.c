#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip to get from one number
 * @n: 1st numnber
 * @m: 2nd number
 * Return: number of bits change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counterAs = 0;
	unsigned long int myN;
	unsigned long int myM = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		myN = myM >> i;
		if (myN & 1)
			counterAs++;
	}
	return (counterAs);
}
