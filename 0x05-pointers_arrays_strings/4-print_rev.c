#include "main.h"

/**
 * print_rev - Prints string in reverse
 *
 * @s: String Argument
 *
 * Return: Always 0
 **/


void print_rev(char *s)
{
	int counter, limit;

	limit = sizeof(s) - 1;
	for (counter = limit - 1; counter >= 0; counter--)
		_putchar(s[counter]);
	_putchar('\n');
}
