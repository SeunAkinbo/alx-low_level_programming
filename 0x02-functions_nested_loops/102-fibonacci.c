#include <stdio.h>

/**
 * main - Output the fibonanci of numbers
 *
 * Return: Always 0
 **/

int main(void)
{
	long long int first = 1, second = 2, next;
	int count = 0;

	printf("%lld, %lld", first, second);
	count = 2;

	while (count < 50)
	{
		next = first + second;
		printf(", %lld", next);
		first = second;
		second = next;
		count++;
	}
	printf("\n");

	return (0);
}
