#include "main.h"
/**
 * _isdigit - Checks if a digit (0 through 9).
 * @c: the character to be checked
 * Return: (1) if the character is lowercase
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
