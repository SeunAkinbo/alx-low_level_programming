#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints the output through the pointer of a function
 * @name: String Argument to be printed
 * @f: Function Pointer
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
