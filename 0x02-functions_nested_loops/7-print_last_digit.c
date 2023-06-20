#include "main.h"
/**
 * print_last_digit - is a function that print the last digit
 * @i: the number with the last digit variable
 * Return: value of num
*/

int print_last_digit(int i)
{
	int num = i % 10;

	if (num < 0)
		num *= -1;

	_putchar(num + '0');
		return (num);
	}
