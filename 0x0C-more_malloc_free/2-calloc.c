#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: Integer Argument
 * @size: Integer Argument
 *
 * Return: NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}

