#include <stdio.h>


/**
 * main - Entry Point
 *
 * Description:
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int digit1 = 0;
	int digit2 = 0;

	while (digit1 <= 99)
	{
		while (digit2 <= 99)
		{
			if (digit1 < digit2 && digit1 != digit2)
			{
				putchar((digit1 / 10) + '0');
				putchar((digit1 % 10) + '0');
				putchar(' ');
				putchar((digit2 / 10) + '0');
				putchar((digit2 % 10) + '0');

				if (digit1 != 98 || digit2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);

}
