#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates array of integers
 * @min: Integer Argument
 * @max: Integer Argument
 * Return: Pointer to an array
 */


int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}

