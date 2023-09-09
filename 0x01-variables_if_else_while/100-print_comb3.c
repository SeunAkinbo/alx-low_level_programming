#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Function to print two numbers combination
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int digit1 = 0;
	int digit2 = 0;

	while (digit1 <= 9)
	{
		while (digit2 <= 9)
		{
			if (digit1 < digit2)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');

				if (digit1 != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;
		digit2 = 0;
	}
	putchar('\n');

	return (0);
}
