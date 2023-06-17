#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: alphabet using putchar()
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;  /**in case of finding e or q 3adehom w zwd el 7rf elli 3aleh el dor*/
			putchar(ch);
			ch++;
	}
	putchar('\n');
	return (0);
}
