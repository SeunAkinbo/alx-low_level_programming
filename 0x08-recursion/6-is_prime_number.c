#include "main.h"

/**
 * is_divisible - Check if n is divisible
 * @n: The number to check for divisibility
 * @divisor: The divisor to check
 *Return: 1 if n is divisible by divisor, 0 otherwise
 */

int is_divisible(int n, int divisor)
{
	if (n % divisor == 0)
		return (1);
	if (divisor * divisor > n)
		return (0);
	return (is_divisible(n, divisor + 1));
}



/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	return (!is_divisible(n, 5));
}

