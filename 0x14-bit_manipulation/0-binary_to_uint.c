#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: the number will be converted
 * Return: +ve number
*/

unsigned int binary_to_uint(const char *b)
{
	int bi;
	unsigned int mybin = 0;

	if (!b)
		return (0);

	for (bi = 0; b[bi]; bi++)
	{
		if (b[bi] < '0' || b[bi] > '1')
			return (0);
		mybin = 2 * mybin + (b[bi] - '0');
	}
	return (mybin);
}
