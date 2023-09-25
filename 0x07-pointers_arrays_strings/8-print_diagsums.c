#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Sums two diagonals of a square matrix
 *
 * @a: Integer Pointer Argument
 * @size: Integer Argument
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
		sum1 += *(a + i * size + i);

	for (i = 0, j = size - 1; i < size; i++, j--)
		sum2 += *(a + i * size + j);

	printf("%d, %d\n", sum1, sum2);
}
