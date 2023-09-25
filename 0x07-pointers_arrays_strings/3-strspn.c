#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of the prefix string
 *
 * @s: String Argument
 * @accept: String Argument
 *
 * Return: Length of the prefix string
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
