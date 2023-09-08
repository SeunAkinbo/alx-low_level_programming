#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase of the alphabeth
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char letter = 'a';  /* Initialize the letter to 'a'*/

	while (letter <= 'z')
	{
		putchar(letter);  /* Print the current letter */
		letter++;         /* Move to the next letter */
	}

	putchar('\n');  /* Print a newline character */

	return (0);
}

