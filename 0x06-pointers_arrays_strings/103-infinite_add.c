#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result or 0 if the result cannot fit in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2), carry = 0, i = len1 - 1;
	int j = len2 - 1, k = 0, start, end;

	if (len1 > size_r || len2 > size_r)
		return (0);
	while (i >= 0 || j >= 0 || carry != 0)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;

		if (k >= size_r - 1)
			return (0);
		r[k] = (sum % 10) + '0'; /*Store the digit in the result*/
		carry = sum / 10;
		k++;
		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}
	r[k] = '\0';
	for (start = 0, end = k - 1; start < end; start++, end--)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
	}
	return (r);
}
