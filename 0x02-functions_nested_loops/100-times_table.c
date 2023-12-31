#include  "main.h"
#include <stdio.h>

/**
 * print_times_table - Function prints n times table
 *
 * @n: Argument that prints the number of multiplication table
 *
 * Return: Void
 **/


void print_times_table(int n)
{
	int num, prod, result;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (result = 1; result <= n; result++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * result;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
