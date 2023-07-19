#ifndef _function_pointers_h
#define _function_pointers_h
#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif

