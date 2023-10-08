#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int multiply(char *num1, char *num2);

int is_digit(char *str);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int result;
	unsigned int i;
	char result_string[12];
	char *err = "Error";

	if (argc != 3)
	{
		for (i = 0; i < 6; i++)
			_putchar(err[i]);

		_putchar('\n');
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		for (i = 0; i < 6; i++)
			_putchar('E');

		_putchar('\n');
		return (98);
	}

	result = multiply(argv[1], argv[2]);
	sprintf(result_string, "%d", result);

	for (i = 0; i < strlen(result_string); i++)
		_putchar(result_string[i]);

	_putchar('\n');
	return (0);
}


/**
 * multiply - Multiplies two numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The result of the multiplication.
 */

int multiply(char *num1, char *num2)
{
	int n1 = atoi(num1);
	int n2 = atoi(num2);

	return (n1 * n2);
}


/**
 * is_digit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */

int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}


