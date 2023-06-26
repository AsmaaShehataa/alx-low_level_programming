#include "main.h"

/**
 * _print_rev - prints a string, in reverse
 * @str: string
 * Return: length
 */

void print_rev(char *s)
{
	int k = 0; 
	int l;

	while (*s != '\0')
	{
		k++;
		s++;
	}
	s--;
	for (l = k; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
