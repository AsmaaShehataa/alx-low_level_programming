#include "main.h"
/**
 * _isalpha - Checks if a character is lowercase or uppercase
 * @c: the character to be checked
 * Return: (1) if the character is lowercase
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||
		(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
