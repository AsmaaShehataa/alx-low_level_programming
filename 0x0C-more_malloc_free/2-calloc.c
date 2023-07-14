#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: pointerof chars
 * @b: input buffer
 * @n: number of bytes to be filled
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of bytes to allocate
 * @size: size of memory allocated
 * Return: new allocated array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
