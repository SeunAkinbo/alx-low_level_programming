#include "lists.h"
  
/**
 * _putchar - prints character to stdout
 * @c: Character argument
 *
 * Return: ascii value
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

