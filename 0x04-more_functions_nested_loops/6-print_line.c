
#include "main.h"

/**
 * print_line - Prints a line
 *
 * @n: Integer
 *
 * Return: Void
 **/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n >= 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
