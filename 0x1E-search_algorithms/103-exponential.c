#include "search_algos.h"

/**
 * bin_search - Function that searches for a value in a sorted array
 *                 of integers using the Binary search algorithm
 * @array: Sorted array of integers to be searched
 * @size: The size of the array
 * @value: The integer to be searched in the sorted array
 * Return: The index of the array if found; -1 otherwise
 **/

int bin_search(int *array, size_t low, size_t size, int value)
{
        size_t left = low, right = size, i;
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

/**
  * exponential_search - Function searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A dataset to search.
  * @size: The number of elements in the dataset.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (idx = 1; idx < size && array[idx] <= value; idx = idx * 2)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}

	right = idx < size ? idx : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, right);
	return (bin_search(array, idx / 2, right, value));
}
