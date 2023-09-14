#include <stdio.h>

/**
 * main - Output the fibonanci of numbers
 *
 * Return: Always 0
 **/

int main(void)
{
	unsigned long int term1, term2, next;
	int i;

	term1 = 1;
	term2 = 2;

	printf("%lu, ", term1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;

		if (i != 49)
			printf(", ");
	}
	printf("\n");

	return (0);
}
