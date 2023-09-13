#include "main.h"
#include <stdio.h>

/**
 * times_table - Function outputs the multiplication table 0 - 9
 *
 * Return: Void
 **/

void times_table(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 <= 9; num_1++)
	{
		for (num_2 = 0; num_2 <= 9; num_2++)
		{
			int mul;

			mul = num_1 * num_2;
			if (num_2 == 0)
				printf("%d, ", mul);
			else if (num_2 != 9)
				printf("%2d, ", mul);
			else
				printf("%2d", mul);
		}
		printf("\n");
	}
	printf("\n");
}
