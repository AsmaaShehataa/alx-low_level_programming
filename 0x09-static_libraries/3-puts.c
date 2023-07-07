#include "main.h"
#include <stdio.h>
/**
 * _puts - returns a string
 * @str: string
 * Return: length
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
