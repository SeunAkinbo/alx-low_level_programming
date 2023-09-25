#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: String Argument
 * @accept: String Argument
 *
 * Return: Pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);
	return (ptr);
}
