#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all the parameters
 * @n: Unsigned Integer of the number of argument
 * @...: Integer of the n argumentd to be summed
 * Return: Integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		total += va_arg(args, int);
	va_end(args);
	return (total);
}
