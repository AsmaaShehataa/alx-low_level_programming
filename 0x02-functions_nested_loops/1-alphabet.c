#include "main.h"
/**
 * print_alphabet - utilizes on the putcharfunction to print the alphabet
 * Return: on success (0)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
