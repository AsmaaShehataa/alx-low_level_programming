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

	int i = n;

	va_start(args, n);

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	while (i--)
		printf("%d%s", va_arg(args, int),
				i ? (separator ? separator : "") : "\n");
	va_end(args);
}
