#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: input string
 * Return: Always (0) on success
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
