#include "main.h"

/**
 * _strstr - Locates Substring
 *
 * @haystack: String Argument
 * @needle: String Argument
 *
 * Return: Pointer to the start of substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (!*needle)
	{
		return (haystack);
	}

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
		{
			return (haystack);
		}

		haystack++;
	}
	return (0);
}
