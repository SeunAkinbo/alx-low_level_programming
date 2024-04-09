#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 *		   integers using the Linear search algorithm
 * @array: The array of integers to perform a search on
 * @size: The size of the array
 * @value: The integer to be searched for in the array
 * Return: The index of the array if found, -1 otherwise
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
