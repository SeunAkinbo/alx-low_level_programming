#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints the size of various types using the sizeof operator
 * and adheres to the Betty coding style.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* Use sizeof to determine and print the size of various types */
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	printf("Size of short: %zu bytes\n", sizeof(short));

	return (0);
}

