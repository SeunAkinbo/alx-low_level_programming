#include "main.h"

/**
 * _puts - Prints a String
 *
 * @str: String Argument
 *
 * Return: Always 0
 **/

void _puts(char *str)
{
	int counter;

	for (counter = 0; str[counter] != '\0'; counter++)
		_putchar(str[counter]);
	_putchar('\n');
}
