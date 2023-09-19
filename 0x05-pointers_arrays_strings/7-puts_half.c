#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print the second half of a string.
 * @str: The input string.
 */
void puts_half(char *str)
{
	int length = 0, i;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = (length + 1) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

