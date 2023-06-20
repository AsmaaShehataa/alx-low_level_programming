#include "main.h"
/**
 * main - Entry point
 * _putchar function to print putchar
 * c: the character to print
 *
 * Return: on success (0)
*/

int main(void)
{
	/*char str[10] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};*/
	char str[] = "_putchar";
	int i;

for (i = 0; i < 8; i++)
{
	putchar(str[i]);
}
putchar('\n');
return (0);
}
