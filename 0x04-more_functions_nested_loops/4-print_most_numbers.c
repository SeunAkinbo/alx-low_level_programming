#include "main.h"

/**
 * print_most_numbers - Prints numbers except 2 and 4
 *
 * Return: Void
 **/

void print_most_numbers(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		if (counter != 2 && counter != 4)
			_putchar(counter + '0');
	}
	_putchar('\n');
}
