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
	int num = 0;

	while (num <= 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
