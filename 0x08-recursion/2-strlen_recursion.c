#include "main.h"

/**
 * _strlen_recursion - Returns the Length of a String
 *
 * @s: String argument or parameter
 *
 * Return: Integer of the string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
