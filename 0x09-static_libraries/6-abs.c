#include<stdio.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @x: the integer to be computed
 * Return: (0) on success
*/

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
