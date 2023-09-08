#include <stdio.h>


/**
 * main - Entry Point
 *
 * Description: Prints alphabeth in reverse order from z
 *
 * Return: 0 (Success)
 **/


int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
