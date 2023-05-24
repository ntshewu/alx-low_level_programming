#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints name from pointer
 * @name: char string to add
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
