#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints a message to the standard error without
 * using printf or puts.
 * It adheres to the Betty coding style.
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
	const char *m = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;  /* Length of the message excluding the null terminator */

	if (write(STDERR_FILENO, mm, len) != len)
	{
		return (1);  /* Error writing to stderr */
	}

	return (0);
}

