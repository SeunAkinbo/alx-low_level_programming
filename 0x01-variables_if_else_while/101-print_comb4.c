#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints combination of three digits without repition
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int digit1 = 0;
	int digit2, digit3;

	while (digit1 <= 9)
	{
		digit2 = digit1 + 1;

		while (digit2 <= 9)
		{
			digit3 = digit2 + 1;

			while (digit3 <= 9)
			{

				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');

				if (digit1 != 7)
				{
					putchar(',');
					putchar(' ');
				}

				digit3++;
			}

			digit2++;
		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
