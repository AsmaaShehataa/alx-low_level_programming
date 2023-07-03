#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes to copy
 * return: (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k;

	for (k = 0; n > 0; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
