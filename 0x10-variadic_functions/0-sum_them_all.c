#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h> 

/**
 * int sum_them_all - returns the sum of all its parameters
 * @n: input variable
 * Return: he sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	int sum;

	va_start(args, n);

	if (n == 0)
		return (0);
	
	sum = 0; 

	for (i = 0; i < n; i++)
	
	sum += va_arg(args, const unsigned int);

	va_end(args);
	return(sum);
}
