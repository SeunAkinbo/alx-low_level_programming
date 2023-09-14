#include "main.h"
#include <stdio.h>


/**
 * main - Computes the sum of multiples of 3 & 5 below 1024
 *
 * Return: Always 0
 **/


int main(void)
{
	int num, sum;

	sum = 0;
	for (num = 1; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
