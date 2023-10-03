#include <stdio.h>

/**
 * main - Prints the number of arguments passed
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));
	return (0);
}
