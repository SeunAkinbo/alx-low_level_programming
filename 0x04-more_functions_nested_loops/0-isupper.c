#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks uppercase
 *
 * @c: Integer
 *
 * Return: 1 and 0
 **/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
