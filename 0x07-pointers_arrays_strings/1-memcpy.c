#include "main.h"
#include <string.h>

/**
 * _memcpy - Copies Memory Area
 *
 * @dest: Character Argument
 * @src: Character Argument
 * @n: Unsigned Integer Argument
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n - 1);
	return (dest);
}
