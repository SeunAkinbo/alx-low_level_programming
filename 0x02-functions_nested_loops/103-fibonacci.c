#include <stdio.h>

/**
 * main - Prints the even numbers in a Fibonanci Sequence
 *
 * Return: Always 0
 **/

int main(void)
{
	int term1, term2, next, sum, limit;

	limit = 4000000;
	term1 = 1;
	term2 = 2;
	sum = 2;
	next = 1;

	while (next <= limit)
	{
		next = term1 + term2;
		if (next % 2 == 0)
			sum = sum + next;
		term1 = term2;
		term2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
