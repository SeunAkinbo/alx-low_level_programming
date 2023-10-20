#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints the number arguments
 * @separator: String Argument
 * @n: Unsigned Integer Argument
 * @...: Variable number of integers to print
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
