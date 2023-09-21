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
	int i, dest_len;

	dest_len = strlen(dest);
	strncat(dest, src, n);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
