#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: return numbers with seperators
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	if (!separator)
		separator = "";

	for (i = 0; i <= n ; ++i)
	{
		printf("%d", va_arg(args, const unsigned int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
