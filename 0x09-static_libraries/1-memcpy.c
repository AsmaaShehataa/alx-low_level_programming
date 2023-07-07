#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes to copy
 * Return: copied memory with n bytes changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int m = n;

	for (; k < m; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
