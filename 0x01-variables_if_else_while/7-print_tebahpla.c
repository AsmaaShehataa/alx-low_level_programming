#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
*/

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
