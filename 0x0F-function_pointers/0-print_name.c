#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - print the name
 *	@name: the name input variable
 *	Return: void (0) on success
*/

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;
	f(name);
}
