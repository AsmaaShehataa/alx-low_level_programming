#include "main.h"
/**
 * main - Entry point
 * _putchar function to print putchar
 * printing alphanumeric characters in lower case
 *
 * Return: on success (0)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
