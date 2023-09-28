#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of the number or -1 otherwise.
 */

int _sqrt_recursive_helper(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursive_helper(n, 1));
}

/**
 * _sqrt_recursive_helper - Helper function to find the square root recursively
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of the number or -1 otherwise.
 */

int _sqrt_recursive_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_recursive_helper(n, guess + 1));
}
