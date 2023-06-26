#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: string
 * Return: length
 */

void puts2(char *str)
{
	int num1 = 0;
	int num2 = 0;
	char *x = str;
	int num3;

	while (*x != '\0')
	{
		x++;
		num1++;
	}
	num2 = num1 - 1;

	for (num3 = 0; num3 <= num2; num3++)
	{
		if (num3 % 2 == 0)
		{
			_putchar(str[num3]);
		}
	}
	_putchar('\n');
}
