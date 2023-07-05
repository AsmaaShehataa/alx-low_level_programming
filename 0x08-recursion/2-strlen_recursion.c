#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: input string
 * Return: Always (0) on success
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{	len++;
		len += _strlen_recursion(s + 1);
	}
		return (len);

}
