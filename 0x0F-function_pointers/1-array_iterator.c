#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Allotees parameters to each function of an array
 * @array: Integer Array
 * @size: Unsigned Integer Argument
 * @action: Function Pointer
 */

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if (size != 0 && action != NULL)
	{
		for (i = 0; i <= (size - 1); i++)
			action(array[i]);
	}
}
