#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 *
 * @dest: String Argument
 * @src: String Argument
 * @n: Integer Argument
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
