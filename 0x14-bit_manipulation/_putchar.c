#include "main.h"

/**
 * _putchar - Prints char value
 * @c: Char argument
 * Return: ascii value of the character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
