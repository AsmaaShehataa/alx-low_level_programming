#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: printing form 0 to 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
