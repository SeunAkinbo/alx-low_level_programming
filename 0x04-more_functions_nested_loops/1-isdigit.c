#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for digit
 *
 * @c: Integer
 *
 * Return: 1 or 0
 **/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
