#include <stdio.h>

/**
 * main - Output the Fibonacci numbers
 *
 * Return: Always 0
 **/
int main(void)
{
	unsigned long term1, term2, next;
	unsigned long a, b, sum;
	int i;

	term1 = 1;
	term2 = 2;

	printf("%lu, %lu, ", term1, term2);

	for (i = 1; i <= 96; i++)
	{
		if (i % 2 == 1)
		{
			a = term1 + term2;
			printf("%lu", a);
			term1 = a;
		}
		else
		{
			b = term1 + term2;
			printf("%lu", b);
			term2 = b;
		}

		if (i != 96)
			printf(", ");
	}

	sum = term1 + term2;
	printf(", %lu\n", sum);

	return (0);
}

