#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - Converts Lowercase string to uppercase
 *
 * @n: String Argument
 *
 * Return: Always 0
 */


char *string_toupper(char *n)
{
	char *holder = n;

	while (*holder != '\0')
	{
		if (islower(*holder))
			*holder = toupper(*holder);
		holder++;
	}
	return (n);
}
