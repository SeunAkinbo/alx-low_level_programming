#include "main.h"
#include <string.h>
/**
 * _strncpy - Function that copies a string
 *
 *  @dest: String Argument
 *  @src: String Argument
 *  @n: Integer Argument
 *
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
return (dest);
}
