#include "main.h"
#include "ctype.h"

/**
 * _isalpha - Function Checks if the argument is an alphabet
 *
 * @c: is an argument being checked
 *
 * Return: 1 & 0
 **/


int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
