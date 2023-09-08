#include <stdio.h>

/**
 * main - Entry piont
 *
 * Description: Prints single digit numbers using the putchar function
 *
 * Return: 0 (Success)
 **/

int main(void)
{
	int number = 0;  /* Initialize the number to 0 */

	while (number <= 9)
	{
		putchar(number + '0');  /* Print the current digit */
		number++;              /* Move to the next digit */
	}
	putchar('\n');  /* Print a newline character */

	return (0);
}

