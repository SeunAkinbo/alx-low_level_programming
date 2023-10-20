#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an Integer
 * @array: Integer Array
 * @size: Integer array size
 * @cmp: Pointer to a function that compares integers
 *
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0 && cmp != NULL && array != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
