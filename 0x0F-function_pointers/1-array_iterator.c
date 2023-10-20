#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Allotees parameters to each function of an array
 * @array: Integer Array
 * @size: Unsigned Integer Argument
 * @action: Function Pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != 0 && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
