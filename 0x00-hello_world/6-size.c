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
{	/* Use sizeof to determine and print the size of various types */
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	/* Returns 0 */
	return (0);
}
