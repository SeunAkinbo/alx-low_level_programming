#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts binart to unit
 * @b: String binary argument
 * Return: Unit
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
			b++;
		}
		else
		{
			return (0);  /*Invalid character in the string*/
		}
	}

	return (result);
}

