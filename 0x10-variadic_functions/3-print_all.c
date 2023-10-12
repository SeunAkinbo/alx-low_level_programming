#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the provided format.
 * @format: The format string representing types of arguments.
 * @...: Variable number of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int num;
	char ch;
	float flt;
	const char *fmt = format;

	va_start(args, format);
	while (fmt != NULL && *fmt)
	{
		switch (*fmt)
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%c", ch);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				flt = va_arg(args, double);
				printf("%f", flt);
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str != NULL ? str : "(nil)");
				break;
		}

		if (*(fmt + 1) && (*fmt == 'c' || *fmt == 'i' || *fmt == 'f' || *fmt == 's'))
			printf(", ");
		fmt++;
	}
	printf("\n");
	va_end(args);
}

