#include "main.h"
#include <string.h>

/**
 **_strcat - Function Concatenates two Strings
 *
 * @dest: Pointer
 * @src: Pointer
 *
 * Return: Pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
