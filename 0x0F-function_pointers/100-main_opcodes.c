#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Fetches opcode
 * @num_bytes: Integer Argument
 * Return: Void
 */

void print_opcodes(int num_bytes);

/**
 * main - Prints opcodes of the main function
 * @argc: Argument Counter
 * @argv: Argument Vector
 * Return: 0, 1 or 2
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);
	return (0);
}

/**
 * print_opcodes - Fetches opcode
 * @num_bytes: Integer Argument
 * Return: Void
 */

void print_opcodes(int num_bytes)
{
	int i;
	char *opcode_start = (char *)main;

	for (i = 0; i < num_bytes; ++i)
	{
		printf("%02hhx ", opcode_start[i]);
	}

	printf("\n");
}
