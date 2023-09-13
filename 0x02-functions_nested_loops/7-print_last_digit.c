#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: An argument
 *
 * Return: Always 0
 **/


int print_last_digit(int num)
{
	int digit = num % 10;

	if (digit < 0)
		digit = -digit;

	_putchar(digit + '0');
	return (digit);
}
