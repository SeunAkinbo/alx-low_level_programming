#include "main.h"

/**
 * leet - encode into 1337 speak
 *
 * @n: Character Argument
 *
 * Return: n Value
 */


char *leet(char *n)
{
	int i, j;
	char seq_1[] = "aAeEoOtTlL";
	char seq_2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == seq_1[j])
				n[i] = seq_2[j];
		}
	}
	return (n);
}
