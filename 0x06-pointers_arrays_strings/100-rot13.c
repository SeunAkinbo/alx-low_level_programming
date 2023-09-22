#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 *
 * @str: String Argument
 *
 * Return: str Value
 */

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		char c = *ptr;

		if (c >= 'a' && c <= 'z')
			c = ((c - 'a' + 13) % 26) + 'a';
		else if (c >= 'A' && c <= 'Z')
			c = ((c - 'A' + 13) % 26) + 'A';
		*ptr = c;
		ptr++;
	}
	return (str);
}
