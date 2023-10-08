#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}


/**
 * string_nconcat - Concatenates two strings
 * @s1: First String  Argument
 * @s2: Second String Argument
 * @n: Integer Argument
 * Return: Pointer to the concatenated string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc(len1 + n + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
