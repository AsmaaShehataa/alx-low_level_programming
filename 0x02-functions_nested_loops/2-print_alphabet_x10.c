#include "main.h"
/**
 * print_alphabet_x10- function will print the alphabet 10 times
 * Return: on success (0)
*/

void print_alphabet_x10(void)
{
	int ch = 'a';
	int i = 0;

	for (i = 0; i <= 10;i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
			putchar('\n');
	}
}
