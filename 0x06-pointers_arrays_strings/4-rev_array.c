#include "main.h"

/**
 * reverse_array - Function reverses an array of numbers
 *
 * @a: Integer Argument
 * @n: Integer Argument
 *
 * Return: Always 0
 */


void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

