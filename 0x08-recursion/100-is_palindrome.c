#include "main.h"
int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - string is a palindrome and 0 if not.
 * @s: the string
 * Return: true if the string is a palindrome
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
		return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of the string
 * @s: string calculate the length of the string
 * Return: length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 +  _strlen_recursion(s + 1));
}

/**
 * check_palindrome - check whether the chars are palindrome
 * @s: the string
 * @i: the index
 * @len: the length
 * Return: 1 if the chars are palindrome, 0 otherwise
*/


int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
