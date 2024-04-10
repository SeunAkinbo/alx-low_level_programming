#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array
 *		   of integers using the Binary search algorithm
 * @array: Sorted array of integers to be searched
 * @size: The size of the array
 * @value: The integer to be searched in the sorted array
 * Return: The index of the array if found; -1 otherwise
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i;
	size_t mid;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] == value)
			return ((int)mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
