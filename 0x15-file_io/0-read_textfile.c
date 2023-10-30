#include "main.h"

/**
 * read_textfile - Reads a text file and prints to POSIX standard output
 * @filename: String Argument of filename
 * @letters: Unsigned Integer Argument
 * Return: The number of letters read or 0
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t byteRead, bytesWritten;


	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	byteRead = fread(buffer, sizeof(char), letters, fp);
	if (byteRead < 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	buffer[byteRead] = '\0';
	bytesWritten = write(STDOUT_FILENO, buffer, byteRead);
	fclose(fp);
	free(buffer);

	if (bytesWritten != byteRead)
		return (0);

	return (byteRead);
}
