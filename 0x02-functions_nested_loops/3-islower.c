#include "main.h"
#include <ctype.h>


/**
 * _islower - Checks for lowercase of alphabets
 *
 *@c: Takes an argument and checks for the case
 *
 * Return: 1 (Success) or 0 (Fail)
 **/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
