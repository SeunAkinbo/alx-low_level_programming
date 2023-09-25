#include "main.h"
#include <string.h>

/**
 * _strchr - Locates Character in a String
 *
 * @s: String Argument
 * @c: Character Argument
 *
 * Return: Pointer to c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
