#include "main.h"

/**
 * swap_int - Swaps Value of Two Integers
 *
 * @a: Integer Pointer
 * @b: Integer Pointer
 *
 * Return: Always 0
 **/


void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
