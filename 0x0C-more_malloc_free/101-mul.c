#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);

	printf("%d\n", result);

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


