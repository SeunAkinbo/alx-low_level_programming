#include "search_algos.h"

/**
 * bin_search - Function that searches for a value in a sorted array
 *		   of integers using the Binary search algorithm
 * @array: Sorted array of integers to be searched
 * @left: The lowest index reference
 * @right: The size of the array
 * @value: The integer to be searched in the sorted array
 * Return: The index of the array if found; -1 otherwise
 **/

int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t idx;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (idx = left; idx < right; idx++)
		printf("%d, ", array[idx]);
	printf("%d\n", array[idx]);

	idx = left + (right - left) / 2;

	if (array[idx] == value && (idx == left || array[idx - 1] != value))
		return (idx);
	if (array[idx] >= value)
		return (bin_search(array, left, idx, value));
	return (bin_search(array, idx + 1, right, value));
}


/**
 * advanced_binary - Recursive function to search for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: The total number of elements in the sorted array
 * @value: The Value to search for
 * Return: Index of the value if found; -1 otherwise
 **/

int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0, end = size;

	if (!array || start == end)
		return (-1);

	return (bin_search(array, start, end - 1, value));
}
