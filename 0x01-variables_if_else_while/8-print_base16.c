#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Program prints out characters of base 16, and
 * converts the letters to lowercase
 *
 * Return: 0 (Success)
 **/


int main(void)
{
	char letter = 'a';
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);

}
