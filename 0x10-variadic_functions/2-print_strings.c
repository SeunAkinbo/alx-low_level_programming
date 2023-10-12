#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints string followed by a new linw
 * @separator: String separator argument
 * @n: Unsigned integer number of arguments
 * @...: String parameters to be printed
 * Return: Void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char*);
		if (j != NULL)
		{
			printf("%s", j);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
