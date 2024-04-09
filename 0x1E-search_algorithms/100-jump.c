#include "search_algos.h"

/**
 * jump_search - Function that searches for a value in a sorted array
 *		 of integers using the Jump search algorithm
 * @array: A sorted array list of integers
 * @size: The size of the array to be searched
 * @value: The intefer to be searched for in the array
 * Return: The index of the integer found or -1 otherwise
 **/

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end = sqrt(size), idx;

	if (!array || size == 0)
		return (-1);

	while (array[end] < value && start < size)
	{
		printf("Value checked array[%ld] = [%ld]\n", start, start);
		printf("Value checked array[%ld] = [%ld]\n", end, end);

		start = end;
		end = end + sqrt(size);
		if (end > size - 1)
			end = size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (idx = start; idx <= end; idx++)
	{
		printf("Value checked array[%ld] = [%ld]\n", idx, idx);
		if (array[idx] == value)
			return ((int)idx);
	}
	return (-1);
}
