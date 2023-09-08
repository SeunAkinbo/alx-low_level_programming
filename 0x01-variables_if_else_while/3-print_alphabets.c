#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Program output Alphabeths in Lower and Upper case
 *
 * Result: 0 (Success)
 *
 **/

int main(void)
{
	char lowLetter = 'a';
	char upLetter = 'A';

	while (lowLetter <= 'z')
	{
		putchar(lowLetter);
		lowLetter++;

	}

	while (upLetter <= 'Z')
	{
		putchar(upLetter);
		upLetter++;
	}

	putchar('\n');

	return (0);

}
