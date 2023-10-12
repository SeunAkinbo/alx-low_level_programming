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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

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
	char *opcode_start = (char *)print_opcodes;
	int i;

	for (i = 0; i < num_bytes; ++i)
	{
		printf("%02hhx ", opcode_start[i]);
	}

	printf("\n");
}

