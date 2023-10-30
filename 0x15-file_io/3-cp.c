#include "main.h"
#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message and exits the program.
 * @code: Exit code.
 * @msg: Error message.
 */

void print_error_and_exit(int code, const char *msg)
{
	dprintf(2, "%s\n", msg);
	exit(code);
}


/**
 * main - Entry point for the program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t read_result, write_result;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file");

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
		print_error_and_exit(99, "Error: Can't write to file");

	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
			print_error_and_exit(99, "Error: Can't write to file");
	}

	if (read_result == -1)
		print_error_and_exit(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd");

	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd");
	return (0);
}
