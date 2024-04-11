#include "search_algos.h"

/**
 * interpolation_search - Function that searches for a value in a
 *                        sorted array of integers using the
 *                        Interpolation search algorithm
 * @array: The dataset to bee searched
 * @size: The number of data in the dataset
 * @value: The data to be searched
 * Return: The index of the data or -1 otherwise
 **/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array || size == 0)
		return (-1);

	for (; high >= low;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (pos > size)
			break;

		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return ((int)pos);
		}
		if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		if (array[pos] > value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
