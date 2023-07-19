#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - print the name
 *	@f: is the function pointer
 * @name: the name of the person
 *	Return: void (0) on success
*/

void print_name(char *name, void (*f)(char *))
{

	if (name && f != NULL)

	f(name);
}
