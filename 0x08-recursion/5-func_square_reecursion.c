#include "main.h"

/**
 * func_square_recursion - recursion to find a square root of a given number
 * @n: number of square roots
 * @i: input number
 * Return: square root
*/

int func_square_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);
	return (func_square_recursion(n, i + 1));
}
