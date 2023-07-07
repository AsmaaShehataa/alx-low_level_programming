#include "main.h"
/**
 * _isupper - Checks if a character is lowercase
 * @c: the character to be checked
 * Return: (1) if the character is lowercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
