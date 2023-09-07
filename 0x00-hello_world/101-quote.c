#include <stio.h>
#include <unistd.h>

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
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

