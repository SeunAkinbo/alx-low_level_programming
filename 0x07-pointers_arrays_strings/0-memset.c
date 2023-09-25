#include "main.h"
#include <string.h>

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: String Argument
 * @b: Char Argument
 * @n: Unsigned Int Argument
 *
 * Return: String
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
